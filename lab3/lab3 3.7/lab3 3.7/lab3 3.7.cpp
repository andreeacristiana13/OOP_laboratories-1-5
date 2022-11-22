// lab3 3.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
using namespace std;

class Student {
private:
	int grade;
public:
	string name;
	int age;
	static int noOfInstances;
	Student(string name, int age) {
		this->age = age;
		this->name = name;
		this->noOfInstances++;
	}
	~Student() {
		this->noOfInstances--;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return this->grade;
	}

	int getNoOfInstances() {
		return noOfInstances;
	}
};

int Student::noOfInstances = 0;

int main()
{
	list<Student*> students;
	Student* student = new Student("Andrei", 19);
	student->setGrade(8);
	students.push_back(student);

	student = new Student("Mihail", 20);
	student->setGrade(5);
	students.push_back(student);

	student = new Student("Cristiana", 23);
	student->setGrade(9);
	students.push_back(student);

	student = new Student("Marina", 18);
	student->setGrade(7);
	students.push_back(student);

	student = new Student("Darius", 28);
	student->setGrade(10);
	students.push_back(student);

	cout << "Number of instances is " << student->getNoOfInstances() << endl;
}
