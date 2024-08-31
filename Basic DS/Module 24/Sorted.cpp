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
    int t;
    cin>>t;
    while(t--){
        set<int> s;
        int n;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(auto it = s.begin(); it != s.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}