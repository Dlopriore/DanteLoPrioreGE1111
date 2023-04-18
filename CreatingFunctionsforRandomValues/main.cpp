#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rollDice(int numSide);

int main() {
    srand(time(0));
    rand();
    cout << rollDice(8) << "  " << rollDice(8) << endl;
}

int rollDice(int numSide) {
    int die;
    die = rand() % numSide +1;
    return die;
}
