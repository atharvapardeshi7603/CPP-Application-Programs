#include<iostream>
using namespace std;

int main()
{
    int i = 11;
    int *ptr = &i;

    cout << i << "\n";   
    cout << (&i) << "\n";   
    cout << (sizeof(i)) << "\n";   
    cout << (ptr) << "\n";   
    cout << (&ptr) << "\n";   
    cout << (*ptr) << "\n";   
    cout << (sizeof(ptr)) << "\n";

    return 0;
}