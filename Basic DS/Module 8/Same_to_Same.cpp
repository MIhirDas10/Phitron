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
bool check_it(Node* &head_a, Node* &head_b){
    Node* temp1 = head_a;
    Node* temp2 = head_b;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val != temp2->val){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1 != NULL || temp2 != NULL){
        return false;
    }
    else{
        return true;
    }
    
}
int main()
{
    int t = 2;
    Node* head_a = NULL;
    Node* tail_a = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_tail(head_a, tail_a, val);
    }


    Node* head_b = NULL;
    Node* tail_b = NULL;
    int val1;
    while(true){
        cin>>val1;
        if(val1 == -1){
            break;
        }
        insert_tail(head_b, tail_b, val1);
    }
    if(check_it(head_a, head_b)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}