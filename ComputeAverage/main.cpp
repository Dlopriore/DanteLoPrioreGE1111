#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3, num4;

    cout << "Enter your first number: " << endl;
    cin >> num1;
    cout << "Enter your second number: " << endl;
    cin >> num2;
    cout << "Enter your third number: " << endl;
    cin >> num3;
    cout << "Enter your fourth number: " << endl;
    cin >> num4;

    //cout << "Enter your three numbers: " << endl;
    //cin >> num1 >> num2 >> num3 >> num4 >> endl;
    cout << endl;
    cout << "The average is " << ((num1+num2+num3+num4)/4) << endl;
}
