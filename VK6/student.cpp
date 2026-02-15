#include "student.h"
#include <iostream>

using namespace std;
Student::Student(string n, int a)
{
    setName(n);
    setAge(a);
}

void Student::setAge(int a)
{
    Age = a;
}

void Student::setName(string n)
{
    Name = n;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Students " << Name << " "
                                   "age " << Age << endl;
}
