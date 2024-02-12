#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fobj;

    fobj.open("Atharva.txt");

    cout << "File is successfully opened\n";

    return 0;
}