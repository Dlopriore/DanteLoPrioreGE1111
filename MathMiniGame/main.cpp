#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    rand();

    int x, y, response, counter = 0;

    x = (rand()%12) + 1;
    y = (rand()%12) + 1;

    do {
        cout << "What is " << x << " + " << y << "?" << endl;
        cin >> response;
    } while(response != (x+y));
    counter++;


    return 0;
}
