#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter the number : \n";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for(int j = 1; j <= 1; j++)
        {
            cout << "* ";
        }

        for(int j = 1; j <= (2 * (i - 1)) - 1 ; j++)
        {
            cout << "  ";
        }

        if(i > 1)
        {
            cout << "*";
        }

        cout << "\n";
    }

    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for(int j = 1; j <= 1; j++)
        {
            cout << "* ";
        }

        for(int j = 1; j <= (2 * (i - 1)) - 1 ; j++)
        {
            cout << "  ";
        }

        if(i > 1)
        {
            cout << "*";
        }

        cout << "\n";
    }


    return 0;
}