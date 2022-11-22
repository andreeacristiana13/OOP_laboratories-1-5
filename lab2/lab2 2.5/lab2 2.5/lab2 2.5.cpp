// lab2 2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int f(int x) {
	return sizeof x;

}

int f(double x) {
	return sizeof x;
}

int f(char* x) {
	return strlen(x);
}

struct Student {
public:
	char* name;
};

int f(Student student) {
	return strlen(student.name);
}

int main()
{
	cout << f(55) << endl;
	cout << f(55.76) << endl;
	char name[] = "tufor";
	cout << f(name) << endl;

	Student* student;
	student = new Student;
	student->name = name;
	cout << f(*student) << endl;


}

