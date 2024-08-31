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
void level_order(Node* root){
    if(root == NULL){
        cout<<"Tree nai"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();
        // 2. jabotiyo ja kaj ase
        cout<<f->val<<" ";
        // 3. tar children gulo ke rakha
        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
        // --- short cut ---
        // if(f->left) q.push(f->left);
        // if(f->right) q.push(f->right);
    }
}
bool search(Node* root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val){
        // bool l = search(root->left, x);
        // if(l == true) return true;
        // else return false;
        return search(root->left, x);
    }
    else{
        return search(root->right, x);
    }
    // if x is smaller than the root's value then go left
    // else go right
    // complexity = O(height)
}
int main()
{
    Node* root = input_tree();
    if(search(root, 12)) cout<<"Yes, Found"<<endl;
    else cout<<"No, Not Found"<<endl;
    return 0;
}

// O(height) = O(logN)  ---> best case  ---> in case of perfect BST
// O(height) = O(n)     ---> worst case ---> in case of bad BST