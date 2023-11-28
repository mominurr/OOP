// program name : write a program to append the contents of a file into another.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string ch;
    fstream fpI, fpO;
    fpI.open("source.txt", ios::in);
    fpO.open("destination.txt",ios::out | ios :: app);
    if (!fpO)
    {
        cout << "Error" << endl;
    }
    else
    {
        while (getline(fpI, ch))
        {
            fpO << ch << endl;
        }
    }
    fpI.close();
    fpO.close();
    return 0;
}


