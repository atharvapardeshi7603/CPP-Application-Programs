#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float fRadius = 0.0f;
    float fArea = 0.0f;

    cout << "Enter the radius of the circle : \n";
    cin >> fRadius;

    fArea = PI * fRadius * fRadius;

    cout << "Area of the circle is : " << fArea;

    return 0;
}