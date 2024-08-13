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
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_middle_elem(Node* head){
    if(head == NULL) return;
    int num = size(head);
    Node* temp = head;
    if(num % 2 == 0){
        int mid1 = num/2 -1;
        int mid2 = mid1 + 1;
        for(int i=0; i<mid1; i++){
            temp = temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else{
        int mid = num/2;
        for(int i=0; i<mid; i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }
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
    print_middle_elem(head);
    return 0;
}