// lab4  ex4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

class Person 
{
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class GroupOfFriends 
{
private:
    list<Person*> friends;
public:
    string groupName;
    GroupOfFriends(string groupName) 
    {
        this->groupName = groupName;
    }
    void addFriend(Person* person) 
    {
        this->friends.push_back(person); 
    }
    void removeFriend(Person* person)
    {
        for (Person* removedperson : this->friends)
        {
            if (removedperson->name == person->name)
            {
                this->friends.remove(person);  ////nu inteleg de ce nu sterge
            }
        }
    }
    void displayFriends() 
    {
        for (Person* person : this->friends) 
        {
            cout << person->name << endl;
        }
    }
};

int main()
{
    Person* friend1 = new Person("Adrian", 18);
    GroupOfFriends* schoolfriend = new GroupOfFriends("paparude");
    schoolfriend->addFriend(friend1);

    Person* friend2 = new Person("Bianca", 20);
    schoolfriend->addFriend(friend2);

    Person* friend3 = new Person("Carmen", 19);
    schoolfriend->addFriend(friend3);

    schoolfriend->displayFriends();

    schoolfriend->removeFriend(friend1);
}

