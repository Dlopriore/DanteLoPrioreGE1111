#include <iostream>
#include <string>

using namespace std;

bool checkCapital(string input);

int main() {
    string message;
    cout << "Enter your message: " << endl;
    cin >> message;

    cout << checkCapital(message);
}

bool checkCapital(string input) {
    bool isCap = false;
    for(int i = 0; i < input.size(); i++) {
        if(isCap != true) {
            if(input[i] <= 90 && input[i] >= 65) {
                isCap = true;
            }
            else{
                isCap = false;
            }
        }
    }
    return isCap;
}

