// better approach
// total time complexity = o(n)
// whereas the first one[module 6] was getting o(n^2)
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
    
};
void print_LL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insert_tail(Node* &head, Node* &tail, int val){  // o(1)
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){   // o(n)
        cin>>val;
        if(val == -1){
            break;
        }
        insert_tail(head, tail, val);  // o(1)
    }
    print_LL(head);
    return 0;
}