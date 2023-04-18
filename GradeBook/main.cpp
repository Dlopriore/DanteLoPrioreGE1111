#include <istream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    rand();

    ofstream gradeFile;
    gradeFile.open("grades.txt");
    for(int student = 0; student < 12; student++){
        int ID = rand() % 100000;
        float grade = (((rand() * 1.0)/RAND_MAX) *60) +40;
        gradeFile << ID << "  " << grade << endl;
    }
    gradeFile.close();

    ifstream readData();

    readData.open("grades.txt");
    if(readData.fail()){
        cout << "Cannot read the file. ERROR.";
        return 0;
    }

    for(int student = 0; student < 5; student++){
        int ID;
        float grade;
        readData << ID << grade;
        cout << ID << "  " << grade << endl;
    }
}
