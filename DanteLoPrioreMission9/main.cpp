//Dante LoPriore
//November 5, 2022
//Mission 9

#include <iostream>
#include <string>

using namespace std;

string playWarGames(string player1, string player2, int countriesP1[], int countriesP2[], int arraySize);

int main() {
    //initializing the size of the array
    const int size = 10;

    //initializing the players' names
    string playerOneName;
    string playerTwoName;

    //initializing the players' occupied cities with the given size
    int player1CountriesOccupied[size];
    int player2CountriesOccupied[size];

    //allows the two players to enter their names
    cout << "Player #1 Enter your name: ";
    cin >> playerOneName;
    cout << "Player #2 Enter your name: ";
    cin >> playerTwoName;

    //initializes the amount of battalions for each player to use in the game
    int amountBattalionsP1 = 100;
    int amountBattalionsP2 = 100;
    int userPlacementOfBattalions;

    //asks player one to enter an amount of battalions to place for each city
    cout << playerOneName << ", how many battalions would you like to place at: " << endl;

    for(int countryNumber = 0; countryNumber < size; countryNumber++){
        //represents the country number, and we have to increase by 1 as the array starts at 0.
        int country = countryNumber + 1;

        //allows the player one to play the gameplay if it is greater than or equal to 0 battalions.
        if(amountBattalionsP1 >= 0) {
            //allows player one to enter their desired amount of battalions to place for each country
            cout <<  "Country " << country << " (" << amountBattalionsP1 << " battalions remaining): ";
            cin >> userPlacementOfBattalions;

            //to determine whether the desired amount of battalions the player choose to place for each country is a valid amount
            while((amountBattalionsP1 - userPlacementOfBattalions) < 0 || userPlacementOfBattalions < 0) {
                //determines if the desired amount the player one choose goes beyond or exceeded the amount of possible battalions.
                if((amountBattalionsP1 - userPlacementOfBattalions) < 0){
                    //Explains why user input is invalid and asks user to put another value.
                    cout << "You have exceeded the amount of Battalions"  << endl;
                    cout << "Country " << country << " (" << amountBattalionsP1 << " battalions remaining): ";
                    cin >> userPlacementOfBattalions;
                }
                //determines if the desired amount the player one choose is a negative number.
                if(userPlacementOfBattalions < 0){
                    //Explains why user input is invalid and asks user to put another value.
                    cout << "You cannot have negative Battalions" << endl;
                    cout << "Country " << country << " (" << amountBattalionsP1 << " battalions remaining): ";
                    cin >> userPlacementOfBattalions;
                }
            }
            //changes the current amount of battalions based on how many battalions that the user wanted to use.
            amountBattalionsP1 = amountBattalionsP1 - userPlacementOfBattalions;
            //places the desired placement of battalions
            player1CountriesOccupied[countryNumber] = userPlacementOfBattalions;
        }
    }

    //produces a new screen for when the player 2 inputs their desired battalions.
    //to not allow player 2 to see player 1's moves.
    int spaceCounter = 0;
    while(spaceCounter < 20) {
        cout << endl;
        spaceCounter++;
    }

    cout << endl;

    //asks player two to enter an amount of battalions to place for each country
    cout << playerTwoName << ", how many battalions would you like to place at: " << endl;

    for(int countryNumber = 0; countryNumber < size; countryNumber++){
        //represents the country number, and we have to increase by 1 as the array starts at 0.
        int country = countryNumber + 1;

        //allows the player two to play the gameplay if it is greater than or equal to 0 battalions.
        if(amountBattalionsP2 >= 0) {

            //allows player two to enter their desired amount of battalions to place for each country
            cout << "Country " << country << " (" << amountBattalionsP2 << " battalions remaining): ";
            cin >> userPlacementOfBattalions;

            //to determine whether the desired amount of battalions the player choose to place for each country is a valid amount
            while((amountBattalionsP2 - userPlacementOfBattalions) < 0 || userPlacementOfBattalions < 0) {
                //determines if the desired amount the player two choose goes beyond or exceeded the amount of possible battalions.
                if((amountBattalionsP2 - userPlacementOfBattalions) < 0){
                    //Explains why user input is invalid and asks user to put another value.
                    cout << "You have exceeded the amount of Battalions"  << endl;
                    cout << "Country " << country << " (" << amountBattalionsP2 << " battalions remaining): ";
                    cin >> userPlacementOfBattalions;
                }
                //determines if the desired amount the player one choose is a negative number.
                if(userPlacementOfBattalions < 0){
                    //Explains why user input is invalid and asks user to put another value.
                    cout << "You cannot have negative Battalions" << endl;
                    cout << "Country " << country << " (" << amountBattalionsP2 << " battalions remaining): ";
                    cin >> userPlacementOfBattalions;
                }
            }
            //changes the current amount of battalions based on how many battalions that the user wanted to use.
            amountBattalionsP2 = amountBattalionsP2 - userPlacementOfBattalions;
            //places the desired placement of battalions
            player2CountriesOccupied[countryNumber] = userPlacementOfBattalions;
        }
    }

    //produces a new screen for when the battle or general gameplay starts.
    int spaceCount = 0;
    while(spaceCount < 20) {
        cout << endl;
        spaceCount++;
    }

    //produces the gameplay and end results based on upon what each user's placement of battalions for each country.
    cout << playWarGames(playerOneName, playerTwoName, player1CountriesOccupied, player2CountriesOccupied, size) << endl;

}

//String String Int Int Int -> String
//produces the gameplay and end results based on upon what each user's placement of battalions for each country.
string playWarGames(string player1, string player2, int countriesP1[], int countriesP2[], int arraySize) {
    //initialize amount of points for each user
    int pointsP1 = 0;
    int pointsP2 = 0;

    //Allows user to know the gameplay started
    cout << "Let the War Games Begin" << endl;
    cout << "_______________________" << endl;

    //goes through each country to determine whether which player had more soldiers in each country.
    for(int countryNumber = 0; countryNumber < arraySize; countryNumber++){
        //represents the country number, and we have to increase by 1 as the array starts at 0.
        int country = countryNumber + 1;
        cout << "Country " << country << " ";
        cout << player1 << ": " << countriesP1[countryNumber] << ", " << player2 << ": " << countriesP2[countryNumber] << ". ";

        //determines whether Player One has greater number of battalions than Player Two
        if(countriesP1[countryNumber] > countriesP2[countryNumber]){
            //awards player on points based on the country's number.
            if(country == 1) {
                pointsP1 = pointsP1 + country;
                cout << player1 << " wins " << country << " point" << endl;
            }
            else{
                pointsP1 = pointsP1 + country;
                cout << player1 << " wins " << country << " points" << endl;
            }
        }

        //determines whether Player Two has greater number of battalions than Player One
        if(countriesP1[countryNumber] < countriesP2[countryNumber]){
            //awards player two points based on the country's number.
            if(country == 1) {
                pointsP2 = pointsP2 + country;
                cout << player2 << " wins " << country << " point" << endl;
            }
            else{
                pointsP2 = pointsP2 + country;
                cout << player2 << " wins " << country << " points" << endl;
            }
        }

        //determines whether Player Two has the same number of battalions than Player One
        if(countriesP1[countryNumber] == countriesP2[countryNumber]){
            cout << "Tie. No points were rewards this round" << endl;
        }
    }

    //produces the score for each player.
    cout << player1 << " has won " << pointsP1 << " points. " << player2 << " has won " << pointsP2 << " points.";
    cout << endl;

    //determines if player one and player two have the same number of points.
    if(pointsP1 == pointsP2){
        return "Tied Game No One Won";
    }

    //determines if player one has more points than player two.
    if(pointsP1 > pointsP2) {
        return "Congrats " + player1 + ", you won the War Games!";
    }

    //determines if player two has more points than player one.
    if(pointsP1 < pointsP2){
        return "Congrats " + player2 + ", you won the War Games!";
    }
}
