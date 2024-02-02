#include<iostream>
using namespace std;

int main()
{
    int Arr[4] = {10,20,30,40};

    cout << "Base address of array is : " << Arr << "\n"; 
    cout << "Address of first element of array is : " << &Arr[0] << "\n";
    cout << "Address of second element of array is : " << &Arr[1] << "\n";
    cout << "First element of array is : " << Arr[0] << "\n";
    cout << "Size of array is : " << sizeof(Arr) << "\n";
    cout << "Size of second element of array is : " << sizeof(Arr[1]);

    return 0;
}