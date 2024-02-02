#include<iostream>
using namespace std;

int main()
{
    int A = 11;

    const int B = 21;

    A++; // Allowed
    A--; // Allowed
    A = 51; // Allowed

    // B++; // Not Allowed
    // B--; // Not Allowed
    // B = 101; // Not Allowed

    return 0;
}