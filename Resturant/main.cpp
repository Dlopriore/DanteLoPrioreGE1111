#include <iostream>

using namespace std;

int main() {
    double totalBill;
    int amountOfPeople;
    double tip;

    cout << "Enter the total bill cost: " << endl;
    cin >> totalBill;
    cout << "Enter the total amount of"
            " people: " << endl;
    cin >> amountOfPeople;
    cout << "Enter the the percentage of the tip: " << endl;
    cin >> tip;

    double tipConversion = tip/100;

    double tipForPerson = (totalBill / amountOfPeople) * tipConversion;

    int costOfFairShare = (totalBill / amountOfPeople) + tipForPerson;

    cout << "Your contribution should be $" << totalBill / amountOfPeople << " without a tip" << endl;
    cout << "Your contribution should be $" << costOfFairShare << " including a tip of $" << tipForPerson << endl;

    return 0;
}
