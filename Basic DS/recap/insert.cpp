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
int size(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_at_position(Node*head, int pos, int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_head(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
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
    Node *head = new Node(10);         
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);    
    Node *tail = d;          
    head->next = a;                 
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Invalid Index"<<endl;
    }
    else if(pos == 0){
        insert_at_head(head, val);
    }
    else if(pos == size(head)){
        insert_at_tail(head, tail, val);
    }
    else{
        insert_at_position(head, pos, val);
    }
    
    print_LL(head);

    return 0;
}