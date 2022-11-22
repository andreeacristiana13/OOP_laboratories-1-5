// lab2 2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Student {
public:
	int grade;
};

Student Max(Student s1, Student s2) {
	if (s1.grade > s2.grade) {
		return s1;
	}

	return s2;
}

int main()
{
	/*
	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;
	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;
	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;
	*/

	Student* s1;
	s1 = new Student;
	s1->grade = 5;

	Student* s2;
	s2 = new Student;
	s2->grade = 7;

	Student result = Max(*s1, *s2);
	cout << result.grade << endl;

}

