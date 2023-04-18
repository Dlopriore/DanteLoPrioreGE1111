
#include <iostream>

using namespace std;

int main() {
    //Math
    //+, -, *, /, % - remainder
    int x = 7;
    int y = 4;
    int total = 7-4;
    cout << "7 + 4" << " = " << 7+4 << endl;
    cout << "7 - 4" << " = " << 7-4 << endl;
    cout << "7 * 4" << " = " << 7*4 << endl;
    cout << "7 / 4" << " = " << 7/4 << endl;
    cout << "7 / 4" << " = " << 7/4 << ", r = " << 7%4 << endl;
    cout << "7.0 / 4.0" << " = " << 7.0/4.0 << endl;
    cout << "(1 + (2*3))/4" << " = " << (1 + (2*3))/4 << endl;
    cout << "(1.0 + (2.0*3.0))/4.0" << " = " << (1.0 + (2.0*3.0))/4.0 << endl;
    cout << x << " + " << y << " = " << total;
    return 0;
}
