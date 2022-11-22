// lab4 4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student
{
public:
	string name;
	int grade;

	Student(string name1, int grade1)
	{
		this->name = name1;
		this->grade = grade1;
	}
};

class StudentList
{
private:
	list<Student*> students;

public:
	StudentList(list<Student*> studentsI)
	{
		students = studentsI;
	}

	Student* studentG5() {
		for (Student* student : students) {
			if (student->grade == 5)
				return student;
		}
	};
};
int main()
{

	list<Student*> students;
	Student* student = new Student("Carmen", 10);
	students.push_back(student);

	student = new Student("Alexandra", 8);
	students.push_back(student);

	student = new Student("Gabriela", 6);
	students.push_back(student);

	student = new Student("Cristiana", 5);
	students.push_back(student);

	StudentList* studentList = new StudentList(students);
	Student* studGrd5 = studentList->studentG5();

	cout << studGrd5->name << ' ' << studGrd5->grade << endl;

}