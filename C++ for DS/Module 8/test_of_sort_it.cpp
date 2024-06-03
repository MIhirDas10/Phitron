// // #include<bits/stdc++.h>
// // using namespace std;
// // class Student
// // {
// // public:
// //     string nm;
// //     int cls;
// //     char s;
// //     int id;
// //     int math_marks;
// //     int eng_marks;
// //     int total_marks;
// // };
// // bool cmp(Student a,Student b)
// // {
// //     int total_a=a.math_marks+a.eng_marks;
// //     int total_b=b.math_marks+b.eng_marks;
// //     if(total_a>total_b){  
// //         return true;
// //     } else if(total_a<total_b){
// //         return false;
// //     } else if(total_a==total_b){
// //         if(a.id<b.id) return true;
// //         else return false;
// //     }
// // }
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     Student a[n];
// //     for(int i=0;i<n;i++){
// //         cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
// //     }
// //     sort(a,a+n,cmp);
// //     for(int i=0;i<n;i++){
// //         cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
// //     }
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
//     int total_marks() const {
//         return math_marks + eng_marks;
//     }
// };
// bool cmp(Student a, Student b){
//     int total_a=a.math_marks+a.eng_marks;
//     int total_b=b.math_marks+b.eng_marks;
//     if(total_a>total_b){  
//         return true;
//     } else if(total_a<total_b){
//         return false;
//     } else if(total_a==total_b){
//         if(a.id<b.id) return true;
//         else return false;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     Student a[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
//     }

//     sort(a,a+n,cmp);

//     for (int i = 0; i < n; ++i) {
//         cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    int total_marks(){
        return math_marks + eng_marks;
    }
};

// Comparison function to sort students
bool cmp(Student a, Student b) {
    if (a.total_marks() != b.total_marks()) {
        return a.total_marks() > b.total_marks();
    } else {
        return a.id < b.id;
    }
}

// Comparison function to sort students
// bool cmp(Student a, Student b) {
//     if (a.total_marks() > b.total_marks()) {
//         return true;
//     } 
//     else if(a.total_marks() < b.total_marks()){
//         return false;
//     }
//     else if(a.total_marks()==b.total_marks()){
//         if(a.id < b.id) return true;
//         else return false;
//     }
// }

int main() {
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a,a+n,cmp);

    for (int i = 0; i < n; ++i) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}