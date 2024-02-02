#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int Brr[] = {10,20,30,40,50};

    int Crr[7] = {10,20,30};

    int Drr[3];
    Drr[0] = 10;
    Drr[1] = 20;
    Drr[2] = 30;

    cout << Arr[3] << " " << Arr[4] << "\n";     
    cout << Brr[3] << " " << Brr[4] << "\n";     
    cout << Crr[1] << " " << Crr[2] << " " << Crr[3] << "\n";
    cout << Drr[1] << " " << Drr[2] << "\n";

    return 0;
}
