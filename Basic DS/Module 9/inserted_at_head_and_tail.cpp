#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
    
};
int size(Node* head){   // o(n)
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void print_normal(Node* head){      // o(n)
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){     // o(n)
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node* head, int pos, int val){ // o(n)
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;     // 100.next = 30
    temp->next = newNode;           // 20.next = 100
    
    newNode->next->prev = newNode;  // 100.prev = 30
    newNode->prev = temp;           // 100.prev = 20
}
void insert_head(Node* &head, Node* &tail, int val){    // o(1)
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node* &head, Node* &tail, int val){    // o(1)
    Node* newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    // if the linked list is completely empty then
    // Node* head = NULL;
    // Node* tail = NULL;

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int pos, val;
    cin>>pos>>val;

    if(pos > size(head)){
        cout<<"Invalid"<<endl;
    }
    if(pos == 0){
        insert_head(head, tail, val);
    }
    else if(pos == size(head)){
        insert_tail(head, tail, val);
    }
    else{
        insert_at_position(head, pos, val);
        cout<<"Value Inserted"<<endl;
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}