#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    cout << "For Addition operation,\n";
    cout << "Enter the number 1 : \n";
    cin >> iValue1;

    cout << "Enter the number 2 : \n";
    cin >> iValue2;

    iAns = iValue1 + iValue2;

    cout << "Addition of " << iValue1 << " and " << iValue2 << " is : " << iAns << "\n";

    return 0;
}