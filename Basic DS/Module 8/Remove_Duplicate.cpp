#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
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
void remove_duplicates(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        Node* traverse = temp;
        while(traverse->next != NULL){
            if(traverse->next->val == temp->val){
                Node* deleteNode = traverse->next;
                traverse->next = traverse->next->next;
                delete deleteNode;
            }
            else{
                traverse = traverse->next;
            }
        }
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true){
        cin>>val;
        if(val == -1){
            break;
        }
        else{
            insert_tail(head, tail, val);
        }
    }
    remove_duplicates(head);
    print_LL(head);
    return 0;
}
