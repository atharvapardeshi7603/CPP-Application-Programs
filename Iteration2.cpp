#include<iostream>
using namespace std;

int main()
{
    int iCnt = 0, iCount = 0; // Loop counter 

    cout << "Enter the number of times you want to print 'Hare Krishna' on screen : \n";
    cin >> iCount;

    // initialization, condition, increment
    for(iCnt = 1; iCnt <= iCount; iCnt++) // for loop
    {
        cout << iCnt << ". Hare Krishna...\n";
    }
    
    return 0;
}