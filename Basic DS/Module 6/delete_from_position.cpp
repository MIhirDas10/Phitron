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
void insert_at_tail(Node* &head, int v)
{
    Node * newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }

    Node * temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp ekhon last node e ase
    temp->next = newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
}
void print_linked_list(Node * head)
{
    cout<<endl;
    cout<<"Your Linked List: ";
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node* &head, int pos, int v)
{
    Node* newNode = new Node(v);
    Node* temp = head;
    for(int i=0; i<=pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<endl<<endl<<"Inserted at position: "<<pos<<endl<<endl;
}
void insert_at_head(Node* &head, int v){
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl;
}
void delete_from_position(Node* &head, int pos)
{
    Node* temp = head;
    for(int i=0; i<=pos-1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next; // save the node for deleting
    temp->next = temp->next->next;
    delete deleteNode;
}
int main()
{
    Node* head = NULL;
    while(true){
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Insert at any position"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout<<"Option 5: Delete from position"<<endl;
        cout<<"Option 6: Terminate"<<endl;
        int op;
        cin>>op;
        if(op == 1){
            cout<<"Please enter value: ";
            int v;
            cin>>v;
            insert_at_tail(head, v);
        }
        else if(op == 2){
            print_linked_list(head);
        }
        else if(op == 3){
            int pos, value;
            cout<<"Enter position: "<<endl;
            cin>>pos;
            cout<<"Enter value: "<<endl;
            cin>>value;
            if(pos == 0){
                insert_at_head(head, value);
            }
            else{
                insert_at_position(head, pos, value);
            }
            // print_linked_list(head);
        }
        else if(op == 4){
            int value;
            cout<<"Enter value: "<<endl;
            cin>>value;
            insert_at_head(head, value);
        }
        else if(op == 5){
            int pos;
            cout<<"Enter position";
            cin>>pos;
            delete_from_position(head, pos);
        }
        else if(op == 6){
            break;
        }
    }
    return 0;
}