#include <iostream>
using namespace std;

int minOfTwo(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int iNo1 = 10, iNo2 = 20;

    int iMin = minOfTwo(iNo1, iNo2);

    cout << iMin << "\n";

    return 0;
}