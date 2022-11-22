// lab3 3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	
	cout << "Unsorted list of students : " << endl;
	for (Student* student : students)
	{
		cout << student->name << ": " << student->getGrade() << endl;
	}
	cout << endl;
	students.sort([](Student* a, Student* b) -> bool { return a->getGrade() < b->getGrade(); });
	
	auto findBest = [students]()-> list<Student*>
	{
		list<Student*> bestStudents;
		int grade = 0;
		for (Student* student : students)
		{
			if (student->getGrade() > grade)
			{
				bestStudents.clear();
				bestStudents.push_back(student);
				grade = student->getGrade();
			}
			else if (student->getGrade() == grade) {
				bestStudents.push_back(student);
			}
		}
		return bestStudents;
	};	

		list<Student*> foundBest = findBest();

		for (Student* student : foundBest)
		{
			cout << endl << "Student found: " << student->name << " with grade " << student->getGrade() << endl;
		}

}
