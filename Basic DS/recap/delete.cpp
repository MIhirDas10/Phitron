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
void delete_at_position(Node* head, int pos){
    Node* temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void delete_head(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
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

    int pos;
    cin >> pos;                    
    if (pos >= size(head))         
    {
        cout << "Invalid" << endl;
    }
    else if(pos == 0){
        delete_head(head);
    }
    else
    {
        delete_at_position(head, pos);   
    }
    print_LL(head);
    return 0;
}