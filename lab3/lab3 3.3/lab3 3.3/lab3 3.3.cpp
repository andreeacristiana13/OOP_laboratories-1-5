// lab3 3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

class Student {
private:
	int grade;
public:
	string name;
	int age;
	Student(string name, int age) {
		this->age = age;
		this->name = name;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return this->grade;
	}

};


int main()
{
	list<Student*> students;
	Student* student = new Student("Andrei", 19);
	student->setGrade(8);
	students.push_back(student);

	student = new Student("Mihail", 20);
	student->setGrade(10);
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

	auto findStudent = [students](const string& name)-> Student*
	{
		for (Student* student : students)
		{
			if (student->name == name)
			{
				return student;
			}
		}
	};

	Student* foundStud = findStudent("Mihail");

	if (foundStud)
	{
		cout << endl << "Student found: " << foundStud->getGrade() << " " << foundStud->name << endl;
	}
	else {
		cout << "Student not found!";
	}

	return 0;
};
