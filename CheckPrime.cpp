#include <iostream>
#include <math.h>
using namespace std;

bool ChkPrime(int n)
{
    bool bRet = true;

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int main()
{
    int iNo = 0;

    cout << "Enter the number : \n";
    cin >> iNo;

    bool bRet = ChkPrime(iNo);

    if(bRet == true)
    {
        cout << "It is prime number\n";
    }
    else
    {
        cout << "It is not a prime number\n";
    }

    return 0;
}