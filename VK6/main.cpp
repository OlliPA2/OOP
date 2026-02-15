#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;


int main ()
{
    int selection =0;
    int a;
    string n;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "anna uuden opiskelijan nimi: " << endl;
            cin >> n;
            cout << endl;
            cout << "anna uuden opiskelijan ikä; " << endl;
            cin >> a;
            cout << endl;
            studentList.push_back(Student(n, a));
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            if(studentList.empty())
            {
                cout << "Lista on tyhja." << endl;
            }
            else
            {
                for(Student& s : studentList)
                {
                    s.printStudentInfo();
                }
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](Student& s1, Student& s2)
                 {
                     return s1.getAge() < s2.getAge();
                 });

            for(Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 3:
            sort(studentList.begin(), studentList.end(),
                 [](Student& s1, Student& s2)
                 {
                     return s1.getName() < s2.getName();
                 });

            for(Student& s : studentList)
            {
                s.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            {
                cout << "Anna opiskelijan nimi: ";
                cin >> n;

                auto it = find_if(studentList.begin(), studentList.end(),
                                  [&](Student& s)
                                  {
                                      return s.getName() == n;
                                  });

                if(it != studentList.end())
                {
                    it->printStudentInfo();
                }
                else
                {
                    cout << "Opiskelijaa ei loytynyt." << endl;
                }
                break;
            }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
}while(selection < 5);

return 0;
}
