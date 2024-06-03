#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    Person* rakib=new Person("Rakib Ahsan",25);
    Person* sakib=new Person("Sakib Ahmed",23);
    // rakib=sakib; // rakib and sakib's address will be same
    // _________________________________________
    // and that's why two of them will show the same value
    // but if sakib is deleted then rakib will also be deleted.
    // that's why we will not do this way
    // _________________________________________
    // rakib->name=sakib->name;
    // rakib->age=sakib->age;
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}