#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student {

    // class is blue print of object
    //          user defined data type


    // atributes
    // by default everything are private
    // which is not accesable outside the class

    // private : // expicitly making private
    //     string name;
    //     string collge;
    //     int age;

    // protected:

    public:
    // which is accesable outside the class
        string name;
        string collge;
        int age;
        
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

    Student stu; // instance or object

    stu.name = "Dhiraj";
    stu.collge = "Pict";
    stu.age = 20;
    
    stu.IntoductionYourself();
   
    return 0;
}