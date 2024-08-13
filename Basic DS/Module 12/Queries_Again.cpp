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
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void print_normal(Node* head){
    cout<<"L -> ";
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    cout<<"R -> ";
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if(head != NULL){
        head->prev = newNode;
    }
    head = newNode;
    if(tail == NULL){
        tail = head;
    }
}

void insert_at_position(Node*& head, Node*& tail, int pos, int val) {
    if(pos == 0){
        insert_at_head(head, tail, val);
        return;
    }
    
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<pos; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    
    if(newNode->next == NULL){
        tail = newNode;
    }
}
int main()
{
    int q;
    cin>>q;
    Node* head = NULL;
    Node* tail = NULL;
    while(q--){
        int X, V;
        cin>>X>>V;
        if(X<0 || X>size(head)){  // if x is less than x or size is greater than x
            cout<<"Invalid"<<endl;
        }
        else{
            insert_at_position(head, tail, X, V);
            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}