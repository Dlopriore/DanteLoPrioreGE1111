#include <iostream>

using namespace std;

int main() {
    const int size = 25;
    float data[] = {3,1,2,-1,-3, 2, 3, -6, 7, 9, 0, 9, 0, 0, 0, 0,0,0,0,0,0,0,0,0,0};
    float dataSecond[size];

    for(int i = 0; i < size; i++){
        dataSecond[i] = data[i];
        cout << dataSecond[i] << ", ";
    }

    cout << endl;
    for(int i = 0; i < size; i++){
        dataSecond[i] = dataSecond[i] + 1;
        cout << dataSecond[i] << ", ";
    }

    return 0;
}
