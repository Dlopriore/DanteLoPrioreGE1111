#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    rand();

    int data[15];

    for(int i = 0; i < 15; i++) {
        data[i] = (rand() % 100) + 1;
    }

    for(int i = 0; i < 15; i++) {
        cout << data[i] << " ";
    }

}
