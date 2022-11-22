#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student
{

protected :
    // which is not accesable outside the class
    // but can be accesable in its child classes
    string name;
    string collge;
    int age;

public:
    Student(string name1, string collge1, int age1)
    {
        name = name1;
        collge = collge1;
        age = age1;
    }

    // method or behavior
    void IntoductionYourself()
    {
        cout << "MY name " << name << endl;
        cout << "MY collge " << collge << endl;
        cout << "MY age " << age << endl;
    }
};
class Te1 : Student // by default it is private
{
public:
    string branch;

    Te1(string name1, string collge1, int age1, string branch1) : Student(name1, collge1, age1)
    // this how child constructor is writter
    {
        branch = branch1;
    }

    void te1class()
    {
        cout << "student name : " << name << "  \n"
             << "studnet branch :" << branch << "\n";
    }
};
int main()
{

    // Student stu1("Dhiraj", "PICT", 20); // instance or object
    // stu1.IntoductionYourself();

    // Te1 comp;
    // error :
    // if base class has constructor then child
    // class should have constuctor
    // if not then error wont occur

    Te1 comp("Dhiraj", "PICT", 20, "Computer Branch");
    comp.te1class();

    return 0;
}