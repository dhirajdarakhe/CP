#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student {



public:
    // which is accesable outside the class
    string name;
    string collge;
    int age;



    // constructor is just like method
    // rule:
    // 1 )  dont have return type
    // 2 ) contuctor has same to class that contructor belongs to
    // 3 ) must be public ( not nessasory );
    // eg :
    Student(string name1, string collge1, int age1)
    // by writing this constuctor
    // we looses the default constuctor which is define by compiler
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
int main()
{

    // what if want to create 10 user then
    // we have to write above code 10 time then
    // constuctor comes in picture


    Student stu1("Dhiraj", "PICT", 20); // instance or object
    stu1.IntoductionYourself();

    // OR
    Student stu2 = Student("Dhiraj", "PICT", 20);
    stu2.IntoductionYourself();


    return 0;
}