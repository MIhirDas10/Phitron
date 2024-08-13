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
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){   // o(n)
        cin>>val;
        if(val == -1){
            break;
        }
        insert_tail(head, tail, val);  // o(1)
    }

    // for sorting --- O(n^2)
    for(Node* i=head; i->next != NULL; i=i->next){  // [i<n-1] last node e eshe theme jabe
        for(Node* j=i->next; j != NULL; j=j->next){ // [j<n]
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
    print_LL(head);
    return 0;
}