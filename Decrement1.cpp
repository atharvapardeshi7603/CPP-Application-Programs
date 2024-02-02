#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 11;
    int iValue2 = 0;
    
    iValue2 = --iValue1; // pre-decrement

    cout << iValue1 << "\n";
    cout << iValue2 << "\n";

    return 0;
}