#include <iostream>
using namespace std;

int sumOfDigits(int a)
{
    int iSum = 0;

    while(a > 0)
    {
        iSum = iSum + (a % 10);
        a = a / 10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;

    cout << "Enter the number : \n";
    cin >> iNo;

    int iSum = sumOfDigits(iNo);

    cout << iSum << "\n";

    return 0;
}