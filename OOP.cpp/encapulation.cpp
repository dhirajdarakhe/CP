#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student {



private:
    // which is not accesable outside the class
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
int main()
{

    Student stu1("Dhiraj", "PICT", 20); // instance or object
    stu1.IntoductionYourself();

    // OR
    Student stu2 = Student("Dhiraj", "PICT", 20);
    stu2.IntoductionYourself();
   
   
    // encapsulation
    // is idea of bunling or trying together the data and method operate on that data
    // perpose of preventing anyone or anything outside the class
    // 



    return 0;
}