#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        s.insert(x); // O(logN) -> inserts and then auto sorts
    }
    cout<<s.count(100)<<endl; // O(logN)
    
    if(s.count(1000)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    // for(auto it = s.begin(); it!=s.end(); it++){
    //     cout << *it << endl; // dereference
    // }
    return 0;
}

// balanced BST  
// inserts
// sorts automatically
// removes duplicates