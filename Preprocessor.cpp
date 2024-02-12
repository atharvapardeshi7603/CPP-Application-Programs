#include<iostream>
using namespace std;

#define PI 3.14
#define DOZEN 12

int main()
{
    int i = 11;
    int j = 21;

    cout << (i * DOZEN) << "\n";
    cout << (j * PI) << "\n";

    return 0;
}

// g++ Preprocessor.cpp -o Myexe -save-temps