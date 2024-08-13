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
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_at_position(Node* head, int pos, int val){ // O(n)
    Node* newNode = new Node(val);
    Node* temp = head; 
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    // temp = pos - 1
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_head(Node* &head, int val){  // o(1)
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
// to insert at tail and keep track of tail
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

// Dynamic Node
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout<<a->val<<endl;
    
    print_LL(head);
    cout<<"Tail->"<<tail->val<<endl;

    int pos, val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Invalid Index"<<endl;
    }
    else if(pos == 0){
        insert_head(head, val);
    }
    else if(pos == size(head)){
        insert_tail(head, tail, val);
    }
    else{
        insert_at_position(head, pos, val);
    }
    print_LL(head);
    cout<<"Tail->"<<tail->val<<endl;
    return 0;
}



// 3 functions here --- O(N)