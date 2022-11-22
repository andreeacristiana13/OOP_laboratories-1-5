// lab3 3.5.cpp : 

#include <iostream>

using namespace std;


class ComplexNumber {
public:
	int real;
	int imag;


	void nrComplex() {
		cout << "Real part is: ";
		cin >> real;
		cout << "Imaginary part is: ";
		cin >> imag;
		cout << endl;
	}

	void display() {
		cout << real << " + " << imag << "i" << endl;
	}

	void sum(ComplexNumber nr1, ComplexNumber nr2) {
		real = nr1.real + nr2.real;
		imag = nr1.imag + nr2.imag;
	}

	void product(ComplexNumber nr1, ComplexNumber nr2) {
		real = nr1.real * nr2.real - nr1.imag * nr2.imag;
		imag = nr1.real * nr2.imag + nr1.imag * nr2.real;
	}

};

int main()
{
	ComplexNumber nr1, nr2, resultsum, resultprod;

	cout << "Enter first complex number" << endl;
	nr1.nrComplex();
	cout << "Enter second complex number" << endl;
	nr2.nrComplex();
	cout << "First Complex Number: ";
	nr1.display();
	cout << "Second Complex Number: ";
	nr2.display();
	cout << endl;

	resultsum.sum(nr1, nr2);
	resultprod.product(nr1, nr2);

}
