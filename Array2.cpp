#include <iostream>
using namespace std;

int main()
{
    char cArr[] = {'a','b','c','d','e'};

    int iArr[] = {10,20,30,40,50};

    float fArr[] = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f};

    double dArr[] = {10.0,20.0,30.0,40.0,50.0};

    cout << cArr[0] << " " << cArr[1] << "\n";
    cout << iArr[0] << " " << iArr[1] << "\n";
    cout << fArr[0] << " " << fArr[1] << "\n";
    cout << dArr[0] << " " << dArr[1] << "\n";

    return 0;
}