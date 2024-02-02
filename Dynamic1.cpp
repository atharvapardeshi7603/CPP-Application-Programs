#include<iostream>
using namespace std;

int main()
{
    int iValue = 10; // static memory allocation
    float fValue = 20.0f; // static memory allocation
    double dValue = 30.0050607080; // static memory allocation

    // dynamic memory allocation
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    cout << "Enter the size of array the you want to create dynamically : \n";
    cin >> iSize;

    ptr = new int[iSize];

    cout << "Enter the data that you want to store in the dynamically created array : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter the element number 1 : ";
        cin >> ptr[iCnt];
    }

    cout << "The data you entered is : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << ptr[iCnt] << "\t";
    }

    cout << endl;


    return 0;
}