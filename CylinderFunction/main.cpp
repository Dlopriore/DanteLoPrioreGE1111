#include <iostream>
#include <string>

using namespace std;

float cylinderVolume(float radius, float height);

int main() {
    float rad, h;
    cout << "Enter a radius: ";
    cin >> rad;

    cout << "Enter a height: ";
    cin >> h;

    cout << "The volume of the cylinder is " << cylinderVolume(rad, h) << endl;
    cout << "The volume of the cylinder is " << cylinderVolume(2, 5) << endl;
    return 0;
}

float cylinderVolume(float radius, float height) {
    float volume;

    volume = 3.14 * (height) * (radius*radius);
    return volume;
}



