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
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
Student* fun()
{
    // object er address return kore
    Student* rahim=new Student(234,5,4.68);
    return rahim;
}
int main()
{
    Student* ans=fun();
    cout<<ans->roll<<" "<<ans->cls<<" "
    <<ans->gpa<<" "<<endl;
    delete ans; // must delete the memory
    return 0;
}