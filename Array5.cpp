#include<iostream>
using namespace std;

int main()
{
    int Arr[3][3];

    Arr[0][0] = 10;
    Arr[0][1] = 20;
    Arr[0][2] = 30;
    Arr[1][0] = 40;
    Arr[1][1] = 50;
    Arr[1][2] = 60;
    Arr[2][0] = 70;
    Arr[2][1] = 80;
    Arr[2][2] = 90;

    cout << Arr[0][0] << "\n";
    cout << Arr[0][1] << "\n";
    cout << Arr[0][2] << "\n";
    cout << Arr[1][0] << "\n";
    cout << Arr[1][1] << "\n";
    cout << Arr[1][2] << "\n";
    cout << Arr[2][0] << "\n";
    cout << Arr[2][1] << "\n";
    cout << Arr[2][2] << "\n";

    return 0;
}