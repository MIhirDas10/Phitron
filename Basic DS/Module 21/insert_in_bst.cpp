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
void insert(Node* &root, int x){
    if(x < root->val){
        // base case
        if(root == NULL){
            root = new Node(x);
            return;
        }
        if(root->left == NULL){ // left side e khali ase naki check
            root->left = new Node(x); // thakle new node banabo
        }
        else{  // khali na thakle abr recursive way te left e jabo
            insert(root->left, x); // jta ekhane korse
        }
    }
    else{
        if(root->right == NULL){ // left side e khali ase naki check
            root->right = new Node(x); // thakle new node banabo
        }
        else{  // khali na thakle abr recursive way te left e jabo
            insert(root->right, x); // jta ekhane korse
        }
    }
}
int main()
{
    Node* root = input_tree();
    int x;
    cin>>x;
    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);
    level_order(root);
    return 0;
}


// ___________________________
// complexity = O(height)
// ___________________________
// 1 ta node = O(height)
    // best case  -> O(N)
    // worse case -> O(logN)

// n ta node = O(n*height)
    // best case  -> O(N*2)
    // worse case -> O(N*logN)