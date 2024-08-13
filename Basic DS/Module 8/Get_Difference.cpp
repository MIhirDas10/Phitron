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
int find_max(Node* head){
    Node* temp = head;
    int mx = temp->val;
    while(temp != NULL){
        if(temp->val > mx){
            mx = temp->val;
        }
        temp = temp->next;
    }
    return mx;
}
int find_min(Node* head){
    Node* temp = head;
    int min = temp->val;
    while(temp != NULL){
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }
    return min;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    long long int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_tail(head, tail, val);
    }
    long long int max = find_max(head);
    long long int min = find_min(head);
    long long int diff = max - min;
    cout<<diff<<endl;
    // print_LL(head);
    return 0;
}