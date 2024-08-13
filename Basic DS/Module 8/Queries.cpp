#include<bits/stdc++.h>
using namespace std;
class Node{
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
void insert_head(Node*& head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node*& head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void delete_at_position(Node*& head, int pos){
    if(head == NULL){
        return;
    }
    if(pos == 0){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        if(temp->next == NULL){
            return;
        }
        temp = temp->next;
    }
    if(temp->next == NULL){
        return;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int main(){
    Node* head = NULL;
    int t;
    cin>>t;
    int num, val;
    while(t--){
        cin>>num>>val;
        if(num == 0){
            insert_head(head, val);
        }
        else if(num == 1){
            insert_tail(head, val);
        }
        else if(num == 2){
            delete_at_position(head, val);
        }
        print_LL(head);
    }
    return 0;
}