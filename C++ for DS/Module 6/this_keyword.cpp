#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name,int age){
        // (*this).name=name // --- beyond the scene
        this->name=name;
        this->age=age;
    }
    void hello(){
        cout<<"hello"<<endl;
    }
};
int main()
{
    Person mihir("Mihir Das",24);
    cout<<mihir.name<<" "<<mihir.age<<endl;
    return 0;
}