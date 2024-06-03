// just like the name suggests
// Student a[5];
// Student Student Student Student Student
#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin>>n;
    // Student a[n]; // normal array
    // int* a=new int[n]; // dynamic int er array
    Student* a=new Student[n];  // datatype Student --- dynamic array
    for(int i=0;i<n;i++){
        cin.ignore(); // name er age enter ashtese that's why aita ignore korte hobe
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}