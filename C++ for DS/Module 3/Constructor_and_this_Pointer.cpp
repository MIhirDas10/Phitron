#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        // roll=r;
        // cls=c;
        // gpa=g;

        // 'this' is a pointer
        // (*this).roll=roll; <--- legit way
        this->roll=roll; // shortcut (arrow) dereference (*) and access (.)
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    Student rahim(29,9,5.01);
    Student karim(45,10,4.33);
    // rahim.roll=29;
    // rahim.cls=9;
    // rahim.gpa=5.00;
    cout<<rahim.roll<<" "<<rahim.cls<<
    " "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<
    " "<<karim.gpa<<endl;
    return 0;
}