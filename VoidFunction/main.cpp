#include <iostream>

using namespace std;

void test(float &a, float &b);

int main() {
    float x, y;
    x = 5;
    y = 8;

    cout << "X = " << x << ", Y = " << y << "." << endl;
    test(x, y);
    cout << "X = " << x << ", Y = " << y << "." << endl;

    return 0;
}

void test(float &a, float &b) {
    cout << "X = " << a << ", Y = " << b << "." << endl;
    a = 1;
    b = 22;
    cout << "X = " << a << ", Y = " << b << "." << endl;
}

