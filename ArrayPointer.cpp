#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {10,20,30,40,50};

    cout << Arr << "\n";
    cout << &Arr << "\n";
    cout << (Arr + 1) << "\n";
    cout << (&Arr + 1) << "\n";
    cout << Arr[1] << "\n";
    cout << Arr[2] << "\n";
    cout << *(Arr+3) << "\n";
    cout << Arr[3] << "\n";
    cout << (3[Arr]) << "\n";

    
    return 0;
}