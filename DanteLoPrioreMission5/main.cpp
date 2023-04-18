//Dante LoPriore
//October 8, 2022


#include <iostream>

using namespace std;

int main() {

    //initializing variables during user input
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int forthNumber;
    int fifthNumber;
    int sixthNumber;

    //User enters their first number
    cout << "Enter the first Number: " << endl;
    cin >> firstNumber;

    //Step One
    if(firstNumber % 2 == 0) {
        //even number case
        cout << "Cut the Red Wire" << endl;
    }
    else
    {
        //odd number
        cout << "Cut the Blue Wire" << endl;
    }

    cout << endl;

    //User enters their second number
    cout << "Enter the second Number: " << endl;
    cin >> secondNumber;

    //Step Two
    if(secondNumber < 60) {
        //second number less than 60
        cout << "Cut the Copper Wire" << endl;
    }
    if(secondNumber >= 60 && secondNumber <= 140) {
        //second number inclusively between 60 and 140
        cout << "Cut the Gold Wire" << endl;
    }
    if(secondNumber > 140) {
        //second number greater than 140
        cout << "Cut the Silver Wire" << endl;
    }

    cout << endl;

    //User enters their third number
    cout << "Enter the third Number: " << endl;
    cin >> thirdNumber;

    //User enters their fourth number
    cout << "Enter the fourth Number: " << endl;
    cin >> forthNumber;

    //Step Three
    if(thirdNumber < forthNumber) {
        //third number less than forth number
        cout << "Please wait " << thirdNumber << " seconds" << endl;
    }
    if(thirdNumber >= forthNumber) {
        //third number greater than forth number
        if(thirdNumber % 3 == 0) {
            //third number has no remainder and divisible by three
            cout << "Please wait " << forthNumber << " seconds" << endl;
        }
        else {
            //third number has a remainder and not divisible by three
            cout << "Please wait " << thirdNumber + forthNumber << " seconds" << endl;
        }
    }

    cout << endl;

    //User enters their fifth number
    cout << "Enter the fifth Number: " << endl;
    cin >> fifthNumber;
    //User enters their sixth number
    cout << "Enter the sixth Number: " << endl;
    cin >> sixthNumber;

    //Step Four
    if((fifthNumber + sixthNumber) >= (secondNumber + thirdNumber) || forthNumber >= 120) {
        //meets one or both requirements for the conditional case
        cout << "Cut the Yellow Wire" << endl;
    }
    else {
        //doesn't meet any requirements for the conditional case
        cout << "Cut the Green Wire" << endl;
    }
    cout << endl;

    //Step Five
    if((firstNumber < fifthNumber) && (fifthNumber < secondNumber) || (firstNumber > fifthNumber) && (fifthNumber > secondNumber)) {
        //meets one or both requirements for the conditional case
        cout << "“Please cut the wire labelled '" << firstNumber << "'." << endl;
    }
    else {
        //doesn't meet any requirements for the conditional case
        cout << "“Please cut the wire labelled '" << fifthNumber << "'." << endl;
    }

    return 0;
}
