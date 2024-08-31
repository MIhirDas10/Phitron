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
void leaf_nodes(Node* root, vector<int>& leaves){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        leaves.push_back(root->val);
        return;
    }
    leaf_nodes(root->left, leaves);
    leaf_nodes(root->right, leaves);
}
int main()
{
    Node* root = input_tree();
    // store in vector
    vector<int> leaves;
    leaf_nodes(root, leaves);
    // reverse the vector or descending order
    sort(leaves.begin(), leaves.end(), greater<int>());
    for(int val:leaves){
        cout<<val<<" ";
    }
    return 0;
}