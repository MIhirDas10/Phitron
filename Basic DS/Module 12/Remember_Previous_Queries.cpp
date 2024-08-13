#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    list<int> mylist;
    while(q--){
        int x, v;
        cin>>x>>v;
        // Insert at head
        if(x == 0){
            mylist.push_front(v);
        }
        // Insert at tail
        else if(x == 1){
            mylist.push_back(v);
        }
        // Delete at position
        else if(x == 2){
            if(v >= 0 && v<mylist.size()){
                // accessing
                auto it = next(mylist.begin(), v);
                mylist.erase(it);
            }
        }
        // Print left to right
        cout<<"L -> ";
        for(auto it = mylist.begin(); it != mylist.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;

        // Print right to left
        cout<<"R -> ";
        // for reversing and then print the list -> so that it prints right to left
        // copying - syntax - list<type>myList(list2)
        list<int> revList(mylist);
        revList.reverse();
        for(auto it = revList.begin(); it != revList.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
