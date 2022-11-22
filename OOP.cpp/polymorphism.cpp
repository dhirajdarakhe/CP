#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student
{

protected:
    // which is not accesable outside the class
    // but can be accesable in its child classes
    string name;
    string college;
    int age;

public:
    Student(string name1, string college1, int age1)
    {
        name = name1;
        college = college1;
        age = age1;
    }

    // method or behavior
    void IntoductionYourself()
    {
        cout << "MY name " << name << endl;
        cout << "MY college " << college << endl;
        cout << "MY age " << age << endl;
    }

    void branchInto()
    {
        cout << " hey my name is " << name << " i'm from computer department " << endl;
    }
    virtual void collegeIntro()
    {
        cout << " hey my college is " << college << "And  my college " << college << endl;
    }
};
class Te1 : public Student // by default it is private
{
public:
    string branch;

    Te1(string name1, string college1, int age1, string branch1) : Student(name1, college1, age1)
    // this how child constructor is writter
    {
        branch = branch1;
    }
    void branchInto()
    {
        cout << " hey my name is " << name << " i'm from te1 And my branch " << branch << endl;
    }
};
class Te2 : public Student // by default it is private
{
public:
    string branch;

    Te2(string name1, string college1, int age1, string branch1) : Student(name1, college1, age1)
    // this how child constructor is writter
    {
        branch = branch1;
    }

    void branchInto()
    {
        cout << " hey my name is " << name << " i'm from te2 And my branch " << branch << endl;
    }
    void collegeIntro()
    {
        cout << " hey my name is " << name << " i'm from te2 And my college " << college << endl;
    }
};
int main()
{

    Student stu("Dhiraj", "PICT", 20); // instance or object

    // Te1 comp1("Dhiraj", "PICT", 20, "Computer Branch");
    // comp1.branchInto();
    // Te2 comp2("Manas", "PICT", 20, "Computer Branch");
    // comp2.branchInto();
    //  : output
    //  hey my name is Dhiraj i'm from te1
    //  hey my name is Manas i'm from te2

    // Te1 comp1("Dhiraj", "PICT", 20, "Computer Branch");
    // Te2 comp2("Manas", "PICT", 20, "Computer Branch");
    // Student *stu1 = &comp1; // it is allowed if base class is oublically inherited
    // Student *stu2 = &comp2;

    // stu1->branchInto();
    // stu2->branchInto();
    //  : output
    //  hey my name is Dhiraj i'm from computer department
    //  hey my name is Manas i'm from computer department

    // Te1 comp1("Dhiraj", "PICT", 20, "Computer Branch");
    // Te2 comp2("Manas", "PICT", 20, "Computer Branch");
    // Student *stu1 = &comp1; // it is allowed if base class is oublically inherited
    // Student *stu2 = &comp2;

    // stu1->collegeIntro();
    // stu2->collegeIntro();

    //  : output
    //  hey my college is PICTAnd  my college PICT
    //  hey my name is Manas i'm from te2 And my college PICT
    return 0;
}