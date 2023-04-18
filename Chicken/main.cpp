#include <iostream>

using namespace std;


float ChickenAnger(int NumTimesKicked[], int size);


int main()
{
    const int chix = 20;
    int kicks[chix];
    cout<<"Anger level="<<ChickenAnger(kicks, chix);
}



float ChickenAnger(int NumTimesKicked[], int size)
{
    float anger = 0;
    for(int i = 0; i < size; i++)
    {
        anger = anger + NumTimesKicked[i]/5;
    }
    return anger;
}