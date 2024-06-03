#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;
    // a.roll=29;
    // a.cgpa=3.95;
    // char tmp[100]="Rakib";
    // strcpy(a.name,tmp);

    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    getchar(); // to get rid of the extra space or line 
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;

    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<" "<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<" "<<endl;
    return 0;
}