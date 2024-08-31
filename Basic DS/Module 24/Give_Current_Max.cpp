#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll, marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
    public:
    bool operator()(Student a, Student b){
        if(a.marks < b.marks){
            return true;
        }
        else if(a.marks > b.marks){
            return false;
        }
        else{ // if marks are same then compare roll numbers
            return a.roll > b.roll;  // descending
        }
    }
};
int main()
{
    int t;
    cin>>t;
    priority_queue<Student, vector<Student>, cmp> pq;
    while(t--){
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        pq.push(Student(name, roll, marks));
    }
    int n;
    cin>>n;
    while(n--){
        int c;
        cin>>c;
        if(c == 0){ // insert
            string name;
            int roll, marks;
            cin>>name>>roll>>marks;
            pq.push(Student(name, roll, marks));
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if(c == 1){ // print highest marks
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if(c == 2){ // delete
            if(!pq.empty()){ // not empty
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else{
                    cout<<"Empty"<<endl;
                }
            }
            else{ // empty
                cout<<"Empty"<<endl;
            }
        }
        else{
            cout<<"Invalid Command"<<endl;
        }
    }
    return 0;
}