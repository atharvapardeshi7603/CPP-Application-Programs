#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter the number : \n";
    cin >> n;

    char ch = '\0';

    for(int i = 1; i <= n; i++)
    {
        ch = 'A';

        for(int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << "\n";
    }


    return 0;
}