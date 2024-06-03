#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
     if(a.roll > b.roll)   return true;
     else return false;
}
// bool cmp(Student a,Student b) // custom // 2ta er moddhe compare korbe
// Student a - left || Student b - right
// true - no need to swap || false - swap
// {
// ------------- based on marks -------------
    // __________________________________
    // if(a.marks>=b.marks) return true;
    // else return false;
    // __________________________________
    // return a.marks<=b.marks; // shortcut
// ------------------------------------------
// ------- based on marks & then roll -------
    // if(a.marks>b.marks){
    //     return true;
    // }
    // else if(a.marks<b.marks){
    //     return false;
    // }
    // else if(a.marks==b.marks){
    //     // if(a.roll<b.roll){
    //     //     return true;
    //     // }
    //     // else{
    //     //     return false;
    //     // }
    //     return a.roll<b.roll;
    // }
// ------------------------------------------
// ----------- EVEN MORE SHORTCUT -----------
    // if(a.marks==b.marks){
    //     return a.roll<b.roll;
    // }
    // else{
    //     return a.marks>b.marks;
    // }
// ------------------------------------------
// }
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    // from cmp -> returns true or false. On that basis sort function will sort
    sort(a,a+n,cmp); // will not work like this because student array is custom
    // we will have to let the computer know on what basis it will sort
    // Custom Comparision Function
    
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}