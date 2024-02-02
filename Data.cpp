#include<iostream>
#include <iomanip>
using namespace std;

int data = 21;

int main()
{
    int iValue = 10;
    float fValue = 20.0f;
    double dValue = 30.8050607;
    char cValue = 'A';
    bool bValue = false;

    cout << iValue << "\n";
    cout << fValue << "\n";
    cout << setprecision(10) << dValue << "\n";
    cout << cValue << "\n";
    cout << bValue << "\n";
    cout << data << "\n";

    return 0;
}


