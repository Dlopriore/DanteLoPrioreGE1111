#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int givenNumber;

    cout << "Enter a number: " << endl;
    cin >> givenNumber;

    //class answer
    if(givenNumber < 0) {
        givenNumber = givenNumber * -1;
    }

    cout << "(Class Answer) Your absolute value of the number is: " << givenNumber << endl;
    return 0;
}
