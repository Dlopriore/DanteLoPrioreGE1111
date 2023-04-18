//Dante LoPriore
//October 15, 2022


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //initializes variables based on the User's response to the yes or no questions.
    string userResponse;
    string userGamePlayChoice;

    //initializes variable based on the User's response to place their gold coin.
    int userGoldCoinPosition;

    //Give the user an opportunity to play the interrogator's game or not.
    cout << "You don't know me, but I know you. \nI want to play a game. \nDo want to play a game? (Yes or No)" << endl;
    cin >> userResponse;

    //If the user responds to the question by saying no, it will end the game.
    if (userResponse == ("No")) {
        cout << endl;
        cout << "You have made your choice; now you will accept your fate" << endl;
        return 0;
    }
    cout << endl;

    //If the user responds to the question by saying no, it will welcome the user to the game before it starts.
    cout << "Let the Games Begin" << endl;
    cout << "Welcome Prisoner to the Most Dangerous Game" << endl;
    cout << "This game will decide your fate ..." << endl;
    cout << endl;

    //sets the seed for the random value being used.
    srand(time(0));
    //initializes the interrogator's silver coin position which is a random number generated between 1-9
    int interrogatorSilverCoinPosition = (rand() % 9 + 1);
    //interrogator's coin can't start at 0 or the start position.

    //Outputs a message to the user to understand where the interrogator placed their silver coin.
    cout << "The interrogator's silver coin is placed on the " << interrogatorSilverCoinPosition << " space." << endl;
    cout << endl;

    //Gives the user the opportunity to place their gold coin on the board.
    cout << "Prisoner which space would you like to place your gold coin?" << endl;
    cin >> userGoldCoinPosition;

    //Checks to see if the User's gold coin is placed on the same space as the interrogator's silver coin or on the start line or a space that doesn't exist.
    while(userGoldCoinPosition == 0 || userGoldCoinPosition == interrogatorSilverCoinPosition || userGoldCoinPosition > 9) {
        //If this condition is true then the user will get another opportunity to place their coin until the gold coin is not placed on the start position
        if(userGoldCoinPosition == 0) {
            cout << "Prisoner please pick another space to place your gold coin as you can't place you coin on the starting line" << endl;
            cin >> userGoldCoinPosition;
        }
        //If this condition is true then the user will get another opportunity to place their coin until it is different from the silver coin's position.
        //The silver coin and the gold coin must be different in order to play the game.
        if(userGoldCoinPosition == interrogatorSilverCoinPosition) {
            cout << "Prisoner please pick another space to place your gold coin as the interrogator's silver coin already took that spot" << endl;
            cin >> userGoldCoinPosition;
        }
        //If this condition is true then the user will get another opportunity to place their coin until the gold coin is not placed out of bounds or a space that doesn't exist.
        if(userGoldCoinPosition > 9) {
            cout << "Prisoner please pick another space to place your gold coin as the number you chose doesn't exist on the board" << endl;
            cin >> userGoldCoinPosition;
        }

    }

    //Allows the user to pick between two gameplay experiences.
    cout << "Would You like to make the game more interesting? (Yes/No)" << endl;
    cin >> userGamePlayChoice;

    /*
     * If the user wants to make the game interesting, the user will play the secondary gameplay experience
     *
     * Original Gameplay Rules:
     * The rules include the user rolls a dice moving the token along the board.
     * The purpose of the game is to have your token be in the same position as the user's gold coin.
     * If your token is in the same position as the user's gold coin, user wins,
     * If your token is in the same position as the interrogator's silver coin, interrogator wins.
     * If your token goes beyond the 9 position on the board the user's token will be sent back to the starting line
     *
     * Secondary Gameplay Experience (Bump Up Point)
     * Interrogator adds 2 copper coins to the board.
     * Each of them are placed on a random numbered space that doesn’t already have a coin on it.
     * The first two times that the token ends a turn on a space with a copper coin, the token instantly moves back to the “Start” space.
     * After that, the copper coins act like the silver coin—three times landing on a copper coin and you lose.
     * This additional gameplay experience is for the bump-up point
    */

    //Represents Secondary Gameplay
    if (userGamePlayChoice == ("Yes")) {
        cout << endl;
        srand(time(0));

        //initializes copper coins having random positions on the board.
        int copperCoinPosition1 = (rand() % 9 + 1);
        int copperCoinPosition2 = (rand() % 9 + 1);

        //checks to see if each copper coin is in their own position, and they are not the same as the user's gold coin and interrogator's silver coin.
        //the position of the copper shuffle until they have their unique position on the board.
        while(copperCoinPosition1 == userGoldCoinPosition || copperCoinPosition2 == userGoldCoinPosition || copperCoinPosition1 == interrogatorSilverCoinPosition
        || copperCoinPosition2 == interrogatorSilverCoinPosition || copperCoinPosition1 == copperCoinPosition2) {
            copperCoinPosition1 = (rand() % 9 + 1);
            copperCoinPosition2 = (rand() % 9 + 1);
        }

        //Outputs the two copper coins' position on the board
        cout << "You have made your choice; now one copper coin is placed on " << copperCoinPosition1 << ", and a second copper coin is placed on " << copperCoinPosition2 << endl;

        //user starts at 0 or starting line
        int userBoardPosition = 0;

        //copper coin counter to keep track of the amount of time the token reached the copper coin
        int copperCoinCounter = 0;

        //check to see if the game continues until the condition is false or does not meet one requirement
        while(userGoldCoinPosition != userBoardPosition && interrogatorSilverCoinPosition != userBoardPosition && copperCoinCounter <= 3) {

            //initializes dice roll variable to show the random value between 1-6
            int diceRoll = (rand() % 6 + 1);

            //to alter the state of the user's position based on dice roll.
            userBoardPosition = diceRoll + userBoardPosition;

            //determines to see if the token needs to be sent back to the starting line
            if(userBoardPosition > 9 || userBoardPosition == copperCoinPosition1 || userBoardPosition == copperCoinPosition2) {
                //checks to see if the token reached the same position as copper coin
                if(userBoardPosition == copperCoinPosition1 || userBoardPosition == copperCoinPosition2) {

                    //adds 1 to counter as it's true that the token reached the same position as copper coin
                    copperCoinCounter = copperCoinCounter + 1;
                    cout << "You rolled a " << diceRoll << " the token is on " << userBoardPosition << endl;
                    cout << "You rolled on a copper coin " << copperCoinCounter << " times" << endl;

                    //new position will be starting line
                    userBoardPosition = 0;

                    //outputs the message of the dice roll and new position for token
                    cout << "Since the you rolled a " << diceRoll << ", which was a copper coin space. The token is on " << userBoardPosition << endl;
                }
                //checks to see if the token reached beyond the space 9.
                if(userBoardPosition > 9) {
                    //new position will be starting line
                    userBoardPosition = 0;

                    //outputs the message of the dice roll and new position for token
                    cout << "You rolled a " << diceRoll << " the token is on " << userBoardPosition << endl;
                }
            }
            else {
                //outputs the message of the dice roll and new position for token
                cout << "You rolled a " << diceRoll << " the token is on " << userBoardPosition << endl;
            }
        }

        //determine if the user won
        if(userGoldCoinPosition == userBoardPosition){
            cout << "Congratulations, you won my game and you will be set free" << endl;
        }

        //determine if the user lost
        if(interrogatorSilverCoinPosition == userBoardPosition || copperCoinCounter == 3){
            cout << "Game Over" << endl;
        }
        return 0;
    }

    //user starts at 0 or starting line
    int userBoardPosition = 0;

    //Represents the Initial Gameplay
    //check to see if the game continues until the condition is false or does not meet one requirement
    while(userGoldCoinPosition != userBoardPosition && interrogatorSilverCoinPosition != userBoardPosition) {

        //initializes dice roll variable to show the random value between 1-6
        int diceRoll = (rand() % 6 + 1);

        //to alter the state of the user's position based on dice roll.
        userBoardPosition = diceRoll + userBoardPosition;

        //checks to see if the token reached beyond the space 9.
        if(userBoardPosition > 9) {
            //new position will be starting line
            userBoardPosition = 0;

            //outputs the message of the dice roll and new position for token
            cout << "You rolled a " << diceRoll << " the token is on " << userBoardPosition << endl;
        }
        else {
            //outputs the message of the dice roll and new position for token
            cout << "You rolled a " << diceRoll << " the token is on " << userBoardPosition << endl;
        }
    }

    //determine if the user won
    if(userGoldCoinPosition == userBoardPosition){
        cout << "Congratulations, you won my game and you will be set free" << endl;
    }

    //determine if the user lost
    if(interrogatorSilverCoinPosition == userBoardPosition){
        cout << "Game Over" << endl;
    }
}
