#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {

    const int purchases = 10;


    int creditCard[purchases];
    int sum = 0;
    srand(time(0));
    rand();

    for(int i = 0; i < purchases; i++){
        int counter = i + 1;


        creditCard[i] = (rand() % 100) + 1;

        cout << "Purchase #" << counter << ": $" << creditCard[i] << endl;

        sum = sum + creditCard[i];
    }
    cout << sum << endl;

    if(sum > 500) {
        cout << "Your card reached maximium capacity";
    }
    else {
        cout << "Your card reached has $" << 500-sum << " until it reached capacity";
    }




    return 0;
}
