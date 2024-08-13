// if visit -> find name in list -> visited = true
// if prev -> prev name -> print
// if next -> next name -> print
// -----------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main(){
    list<string> site;
    string name;
    while(true){
        cin>>name;
        if(name == "end"){
            break;
        }
        site.push_back(name);
    }
    int q;
    cin>>q;
    auto curr = site.begin();
    bool visited = false;  // flag

    string s; // visit/prev/next
    while(q--){
        cin>>s;
        // for visit
        if(s == "visit"){
            string specific_name;
            cin>>specific_name;
            // syntax - find(myList.begin(),myList.end(),V)
            auto it = find(site.begin(), site.end(), specific_name);
            if(it != site.end()){
                curr = it;
                cout<<*curr<<endl;
                visited = true;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
        // for prev
        else if(s == "prev"){
            if(visited){  // true
                if(curr != site.begin()){
                    curr--;
                    cout<<*curr<<endl;
                }
                else{        // false
                    cout<<"Not Available"<<endl;
                }
            }
        }
        // for next
        else if(s == "next"){
            if(visited){  // true
                if(next(curr) != site.end()){
                    curr++;
                    cout<<*curr<<endl;
                }
                else{        // false
                    cout<<"Not Available"<<endl;
                }
            }
        } 
    }
    return 0;
}
