#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    // constractor
    Node(int val){
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
int main()
{
    // Node a, b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;

// Dynamic Node
    Node* head = new Node(10); // pointer (because of *)
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout<<(*a).val<<endl; // dereference
    // or 
    cout<<a->val<<endl;
    
    print_LL(head);
    return 0;
}