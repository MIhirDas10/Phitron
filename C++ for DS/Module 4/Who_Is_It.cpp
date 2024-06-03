// // #include<bits/stdc++.h>
// // using namespace std;
// // class Student{
// // public:
// //     int id;
// //     char name[1000];
// //     char section;
// //     int marks;
// //     Student(int id,char* name,char section,int marks){
// //         this->id=id;
// //         for (int i=0;i<100 && name[i]!='\0';i++){
// //             this->name[i]=name[i];
// //         }
// //         this->name[5]='\0';
// //         this->section=section;
// //         this->marks=marks;
// //     }
// //     Student(){
// //         this->id=0;
// //         this->name[0]='\0';
// //         this->section='A';
// //         this->marks=0;
// //     }
// // };
// // int main(){
// //     int T;
// //     cin>>T;
// //     while(T--){
// //         Student students[3];
// //         for (int i=0;i<3;i++){
// //             int id,marks;
// //             char name[1000];
// //             char section;
// //             cin>>id>>name>>section>>marks;
// //             students[i]=Student(id,name,section,marks);
// //         }
// //         Student best_student=students[0];
// //         for (int i=1;i<3;i++){
// //             if(students[i].marks>best_student.marks ||
// //                 (students[i].marks==best_student.marks && students[i].id<best_student.id)){
// //                 best_student=students[i];
// //             }
// //         }
// //         cout<<best_student.id<<" "<<best_student.name<<" "<<best_student.section<<" "<<best_student.marks<<endl;
// //     }
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;
// class Student{
// public:
//     int id;
//     char name[1000];
//     char section;
//     int marks;
//     Student(int id,char* name,char section,int marks){
//         this->id=id;
//         for (int i=0;i<100 && name[i]!='\0';i++){
//             this->name[i]=name[i];
//         }
//         this->name[5]='\0';
//         this->section=section;
//         this->marks=marks;
//     }
//     Student(){
//         this->id=0;
//         this->name[0]='\0';
//         this->section='A';
//         this->marks=0;
//     }
// };

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         Student students[3];
//         for (int i=0;i<3;i++){
//             int id,marks;
//             char name[1000];
//             char section;
//             cin>>id>>name>>section>>marks;
//             students[i]=Student(id,name,section,marks);
//         }
//         Student best=students[0];
//         for(int i=1;i<3;i++){
//             if(students[i].marks>best.marks ||
//                 (students[i].marks == best.marks && students[i].id<best.id)){
//                 best=students[i];
//             }
//         }
//         cout<<best.id<<" "<<best.name<<" "<<best.section<<" "<<best.marks<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int marks;

    Student(int id, const char* name, char section, int marks) {
        this->id = id;
        // strncpy(this->name, name, 100);
        for (int i=0;i<100 && name[i]!='\0';i++){
            this->name[i]=name[i];
        }
        // this->name[5]='\0';
        this->name[strlen(name)] = '\0';  // Ensure null termination
        this->section = section;
        this->marks = marks;
    }

    Student() {
        this->id = 0;
        this->name[0] = '\0';
        this->section = 'A';
        this->marks = 0;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        Student students[3];
        for (int i = 0; i < 3; i++) {
            int id, marks;
            char name[101];
            char section;
            cin >> id >> name >> section >> marks;
            students[i] = Student(id, name, section, marks);
        }

        Student best = students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].marks > best.marks || 
                (students[i].marks == best.marks && students[i].id < best.id)) {
                best = students[i];
            }
        }
        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }
    return 0;
}
