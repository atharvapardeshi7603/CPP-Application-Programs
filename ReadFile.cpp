#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fobj("Atharva.txt");
    string readValue;

    if(fobj.is_open())
    {
        while ( getline (fobj, readValue) )
        {
            cout << readValue << "\n";
        }
        fobj.close();
    }
    else
    {
        cout << "Unable to open file\n";
    }

    return 0;
}