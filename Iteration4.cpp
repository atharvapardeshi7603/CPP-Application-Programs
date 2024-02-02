#include<iostream>
using namespace std;

int main()
{
    int iCnt = 1, iCount = 0; // Loop counter

    cout << "Enter the number of times you want to print 'Hare Krishna' on screen : \n";
    cin >> iCount;

    while(iCnt <= iCount) // Condition // while loop
    {
        cout << iCnt << ". Hare Krishna...\n";
        iCnt++; // Increment
    }
    
    return 0;
}