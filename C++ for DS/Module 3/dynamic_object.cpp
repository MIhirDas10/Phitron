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
int main()
{
    // Student rahim(342,10,4.56);
    // Student* karim=new Student(342,10,4.56);
    int roll,cls;
    double gpa;
    cin>>roll>>cls>>gpa;
    Student* karim=new Student(roll,cls,gpa);
    cout<<karim->roll<<" "<<karim->cls<<
    " "<<karim->gpa<<endl;
    return 0;
}