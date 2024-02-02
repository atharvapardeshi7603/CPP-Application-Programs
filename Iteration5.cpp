#include<iostream>
using namespace std;

int main()
{
    int iCnt = 1; // Loop counter

    do // loop executes at least once
    {
        cout << "Hare Krishna...\n";
        iCnt++; // Increment
    } while(iCnt <= 5); // Condition
    
    return 0;
}