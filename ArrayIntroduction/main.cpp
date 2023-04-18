#include <iostream>

using namespace std;

int main() {
    int data[10];

    data[0] = 4;
    cout << data[0] << endl;
    cout << 5*(data[0] + 3) << endl;
    cout << data[2] << endl;
    cout << data << endl;

    cout << "Enter a value for element 2: " << endl;
    cin >> data[2];
    cout << endl;

    for(int i = 0; i < 10; i++) {
        cout << data[i] << endl;
    }
}
