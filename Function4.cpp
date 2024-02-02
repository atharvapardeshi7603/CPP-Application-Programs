#include<iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}

int Subtraction(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 - iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    cout << "For Addition operation,\n";
    cout << "Enter the number 1 : \n";
    cin >> iValue1;

    cout << "Enter the number 2 : \n";
    cin >> iValue2;

    iAns = Addition(iValue1, iValue2);

    cout << "Addition of " << iValue1 << " and " << iValue2 << " is : " << iAns << "\n";

    iAns = Subtraction(iValue1, iValue2);

    cout << "Subtraction of " << iValue2 << " from " << iValue1 << " is : " << iAns << "\n";

    return 0;
}