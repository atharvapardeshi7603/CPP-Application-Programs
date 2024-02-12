#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {10,20,30,40,50};

    int *p = Arr;
    int *q = (&Arr[2]);

    cout << p << "\n";
    cout << q << "\n";

    return 0;
}