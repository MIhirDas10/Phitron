#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string name,int age,int m1,int m2){
        this->name=name;
        this->age=age;
        marks1=m1;
        marks2=m2;
    }
    void hello()
    {
        // cout<<"hello inside object"<<endl;
        cout<<name<<" "<<age<<" "<<endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }
};
int main()
{
    Person Mihir("Mihir Das",23,95,85);
    // Mihir.hello();
    // cout<<Mihir.name<<" "<<Mihir.age<<endl;
    cout<<Mihir.total_marks()<<endl;
    return 0;
}