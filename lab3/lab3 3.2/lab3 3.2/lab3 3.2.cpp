// lab3 3.2.cpp 

#include <iostream>
#include <list>
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
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return this->grade;
	};
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

	cout << "Sorted list of students ascending by grade : " << endl;
	for (Student* student : students)
	{
		cout << student->name << ": " << student->getGrade() << endl;
	}

	students.sort([](Student* a, Student* b) -> bool { return a->name < b->name; });

	cout << endl << "Sorted list of students alphabetically by name : " << endl;
	for (Student* student : students)
	{
		cout << student->name << endl;
	}

	return 0;
};