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
bool check_duplicate(Node* head){
    Node* var1 = head;
    while(var1 != NULL){                // usual loop
        Node* var2 = var1->next;        // var2 = var1.next means head.next
        while(var2 != NULL){            // the usual loop for this things
            if(var2->val == var1->val){
                return true;
            }
            var2 = var2->next;
        }
        var1 = var1->next;
    }
    return false;
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
    if(check_duplicate(head)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}