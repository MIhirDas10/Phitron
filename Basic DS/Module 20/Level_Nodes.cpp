#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void levelnodes(Node* root, int t_level){
    if(!root){
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node*, int>> q;
    q.push({root, 0}); // made a pair
    bool levelFound = false;
    while (!q.empty()){
        Node* node = q.front().first;
        int lvl = q.front().second;
        q.pop();

        if(lvl == t_level){
            cout<<node->val<<" ";
            levelFound = true;
        }
        if(lvl > t_level){
            break;
        }
        if(node->left) q.push({node->left, lvl + 1});
        if(node->right) q.push({node->right, lvl + 1});
    }

    if(!levelFound){
        cout<<"Invalid";
    }
    cout<<endl;
}
int main(){
    Node* root = input_tree();
    int level;
    cin>>level;
    levelnodes(root, level);
    return 0;
}
