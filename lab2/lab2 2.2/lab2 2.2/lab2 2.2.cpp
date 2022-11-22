// lab3_3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int f(float n, bool isRoundedTo100 = false) {
    int parteIntreaga = floor(n);
    float parteFractionara = n - parteIntreaga;

    if (isRoundedTo100 == false) {
        if (parteFractionara < 0.5) {
            return parteIntreaga;
        }
        else {
            return n + 1;
        }
    }
    else {
        int moreThan100 = parteIntreaga / 100;
        float remainingNumber = parteIntreaga % 100 + parteFractionara;
        if (remainingNumber < 50) {
            return moreThan100 * 100;
        }
        else {
            return moreThan100 * 100 + 100;
        }
    }
}

int main()
{
    cout << f(1.25)<<endl;
    cout << f(1.75) << endl;
    cout << f(1051.23, true) << endl;
    cout << f(1001.75, true) << endl;
}

