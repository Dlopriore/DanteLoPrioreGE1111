//Dante LoPriore
//October 18, 2022
//Mission 7 Homework

#include <iostream>
#include <cstdlib>

using namespace std;

//initialize and declare the encryption function
string encryption(string message, int seed);

//initialize and declare the decryption function
string decryption(string message, int seed);

int main() {
    //initialize the variable for the user's response in deciding where they want encryption or decryption
    char userResponse;

    //initialize the variable for the user's response in deciding what random seed the secret message should be given in.
    int givenSeed;

    //initialize the variable for the user's secret message
    string secretMessage;

    //to welcome the user to either use encryption or decryption for the user's secret message.
    cout << "Is this an encryption or decryption? (Type E for Encryption or D for Decryption)" << endl;
    cin >> userResponse;

    //to determine whether the user wants to perform encryption or not.
    if(userResponse == 'E') {
        //allows the user to enter a secret message to be encrypted.
        cout << "Enter a secret message to be encrypted: " << endl;
        cin >> secretMessage;

        //allows the user to enter a seed for the secret message to be decrypted in.
        cout << "Enter a seed for you secret message to be encrypted: " << endl;
        cin >> givenSeed;
        cout << endl;

        //outputs the encrypted secret message using the encryption function
        cout << "Your encrypted message is: " << encryption(secretMessage, givenSeed) << endl;
    }

    //to determine whether the user wants to do decryption or not.
    if(userResponse == 'D') {
        //allows the user to enter a secret message to be decrypted.
        cout << "Enter a secret message to be decrypted: " << endl;
        cin >> secretMessage;

        //allows the user to enter a seed for the secret message to be decrypted in.
        cout << "Enter a seed for you secret message to be decrypted: " << endl;
        cin >> givenSeed;
        cout << endl;

        //outputs the encrypted secret message using the encryption function
        cout << "Your decrypted message is: " << decryption(secretMessage, givenSeed) << endl;
    }
}

//String Integer -> String
//the encryption function shifts each character of the secret message to the right by adding a
//constant value or random number to each number and then convert the numbers back to letters
//if the shift to the right is beyond the numerical value of the last letter in the alphabet,
//then the character will "wrap-around” back to the beginning of the alphabet.
//The encryption function can be defined as the process that coverts a piece of data into a code.
string encryption(string message, int givenSeed) {
    //initialize user's secret message that is encrypted
    string encryptedMessage;

    //initialize user's random number to shift each character.
    srand(givenSeed);

    //checks all the characters that are in the secret message that going to be encrypted
    for(int charNum = 0; charNum < message.size(); charNum++) {

        //to initialize a random number to shift the characters of the secret message
        int randomLetterShift = rand() % 26;

        //to determine whether the shift of the character from the secret message is within 90 or character Z
        if(message[charNum] + randomLetterShift <= 90) {
            //produce the new letter after it had been shifted.
            char newChar= message[charNum] + randomLetterShift;
            encryptedMessage = encryptedMessage + newChar;
        }

        //to determine whether the shift of the character from the secret message is beyond 90 or character Z
        if(message[charNum] + randomLetterShift > 90) {
            //produce the new letter after it had been shifted.
            char newChar= (message[charNum] - 26) + randomLetterShift;
            encryptedMessage = encryptedMessage + newChar;
        }
    }
    //outputs the encrypted message
    return encryptedMessage;
}

//String Integer -> String
//the decryption function shifts each character of the secret message to the left by adding a
//constant value or random number to each number and then convert the numbers back to letters
//if the shift to the left is beyond the numerical value of the first letter in the alphabet,
//then the character will "wrap-around” back to the end of the alphabet.
//The decryption function can be defined as the process that coverts a code into a piece of data.
string decryption(string message, int givenSeed) {
    //initialize user's secret message that is decrypted
    string encryptedMessage;

    //initialize user's random number to shift each character.
    srand(givenSeed);

    //checks all the characters that are in the secret message that going to be decrypted
    for(int charNum = 0; charNum < message.size(); charNum++) {
        //to initialize a random number to shift the characters of the secret message
        int randomLetterShift = rand() % 26;

        //to determine whether the shift of the character from the secret message is within 65 or character A
        if(message[charNum] - randomLetterShift >= 65) {
            //shifts the letter
            char newChar= message[charNum] - randomLetterShift;
            //produce the new letter after it had been shifted.
            encryptedMessage = encryptedMessage + newChar;
        }

        //to determine whether the shift of the character from the secret message is less than 65 or character A
        if(message[charNum] - randomLetterShift < 65) {
            //shifts the letter
            char newChar= (message[charNum] + 26) - randomLetterShift;
            //produce the new letter after it had been shifted.
            encryptedMessage = encryptedMessage + newChar;
        }
    }
    //outputs the encrypted message
    return encryptedMessage;
}
