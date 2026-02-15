#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;
class Student
{
public:
    Student(string n, int a);
    void setAge(int a);
    void setName(string n);
    string getName();
    int getAge();
    void printStudentInfo();
private:
    string Name;
    int Age;
};

#endif // STUDENT_H
