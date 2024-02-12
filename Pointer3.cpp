#include<iostream>
using namespace std;

int main()
{
    int no = 11;

    int *ptr = &no;
    int *a = &no;

    int **q = &ptr;

    int ***r = &q;

    int ****x = &r;

    int *****y = &x;

    cout << no << "\n";
    cout << ptr << "\n";
    cout << a << "\n";
    cout << q << "\n";
    cout << r << "\n";
    cout << x << "\n";
    cout << y << "\n";

    return 0;
}