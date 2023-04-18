#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int size = 50;
    int evenCounter = 0;
    int data[size];
    srand(time(0));
    rand();

    for(int i = 0; i < size; i++){
        data[i] = (rand() % 100) + 1;
    }

    for(int i = 0; i < size; i++){
        cout << data[i] << ", ";
        if(data[i] % 2 == 0){
            evenCounter = evenCounter + 1;
        }
    }
    cout << endl;
    cout << "There are " << evenCounter << " even numbers.";
    cout << endl;

    const int arraySize = 50;
    char letters[size];

    for(int i = 0; i < arraySize; i++) {
        letters[i] = (rand() % 85) + 1;
        while(85 < letters[i] || letters[i] < 65) {
            letters[i] = (rand() % 85) + 1;
        }
        cout << letters[i] << ", ";
    }
}
