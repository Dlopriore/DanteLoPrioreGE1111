#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
rand();
const int arraySize = 100;
int values[arraySize];
for(int n=0; n < arraySize; n++) {
values[n] = rand()%51;
}
for(int n = arraySize-20; n < arraySize; n++) {
cout << values[n] << " ";
}
int numValues10OrBelow = 0;
for(int n=0; n < arraySize; n++) {
if(values[n] <= 10) {
numValues10OrBelow++;
}
}
cout << endl << "There are " << numValues10OrBelow << " values less than or
equal to 10.";
return(0);
}
