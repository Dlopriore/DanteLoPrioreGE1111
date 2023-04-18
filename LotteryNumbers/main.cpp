#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int size = 6;
    int lotteryNumbers[size];

    srand(time(0));
    rand();

    for(int x = 0; x < size; x++){
        lotteryNumbers[x] = (rand() % 70) + 1;


         cout << lotteryNumbers[x] << " , ";
    }

}
