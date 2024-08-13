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
void print_LL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<endl;
        temp = temp->next;
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
void reverse(Node* &head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->prev = cur->next;
    cur->next = NULL;
}
bool isPalindrome(Node* head){
    Node* newhead = NULL;
    Node* newtail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insert_tail(newhead, newtail, temp->val);
        temp = temp->next;
    }
    reverse(newhead, newhead);

    temp = head;
    Node* temp2 = newhead;
    while(temp != NULL){
        if(temp->val != temp2->val){
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }
    if(isPalindrome(head)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}