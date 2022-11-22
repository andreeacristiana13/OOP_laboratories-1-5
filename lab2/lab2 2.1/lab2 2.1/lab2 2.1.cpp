// lab2 2.1.cpp 

#include <iostream>
using namespace std;

void change1(int& a, int& b) { //parameters as reference
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void change2(int* a, int* b) { //parameters as address
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << '\n';

    cout << "change1: " << '\n';
    change1(x, y);
    cout << "x =" << x << " \n" << "y = " << y << '\n';
    cout << '\n';

    int* p = new int;
    int* z = new int;

    cout << "p = ";
    cin >> *p;
    cout << "z = ";
    cin >> *z;
    cout << '\n';

    cout << "change2: " << '\n';

    change2(p, z);

    cout << "p =" << *p << " \n" << "z = " << *z;

}