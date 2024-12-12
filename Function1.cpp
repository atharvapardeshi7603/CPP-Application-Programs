#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int iNo1 = 10, iNo2 = 20;

    int iSum = sum(iNo1, iNo2);

    cout << iSum << "\n";

    return 0;
}