#include <iostream>
#include <math.h>
using namespace std;

void PrintPrime(int n)
{
    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << "\n";

}

int main()
{
    int iNo = 0;

    cout << "Enter the number : \n";
    cin >> iNo;

    PrintPrime(iNo);

    return 0;
}