#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "The smaller one is " << endl;
    if(a > b) {
        cout << b;
    }
    else {
        if(a == b) {
            cout << "niether";
        }
        else {
            cout << a;
        }
    }

    cout << endl;
    cout << "The smaller one is " << min(a , b);


}
