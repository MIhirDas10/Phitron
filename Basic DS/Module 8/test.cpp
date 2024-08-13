#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to print the linked list
void print_LL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a node at the tail
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// Function to check if value exists in the linked list
bool exists(Node* head, int val) {
    Node* temp = head;
    while(temp != NULL){
        if (temp->val == val) return true;
        temp = temp->next;
    }
    return false;
}

// Function to remove duplicates
void remove_duplicates(Node* &head, Node* &tail) {
    Node* current = head;
    while(current != NULL){
        if (!exists(head, current->val)){
            insert_tail(head, tail, current->val);
        }
        current = current->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    // Read input values until -1
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_tail(head, tail, val);
    }

    // Node* newHead = NULL;
    // Node* newTail = NULL;

    // Remove duplicates
    remove_duplicates(head, tail);

    // Print the final linked list
    print_LL(head);

    return 0;
}






// #include <iostream>
// using namespace std;

// // Node structure
// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// // Function to print the linked list
// void print_LL(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Function to insert a node at the tail
// void insert_tail(Node* &head, Node* &tail, int val) {
//     Node* newNode = new Node(val);
//     if (head == NULL) {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

// // Function to check if value exists in the linked list
// bool exists(Node* head, int val) {
//     Node* temp = head;
//     while(temp != NULL){
//         if (temp->val == val) return true;
//         temp = temp->next;
//     }
//     return false;
// }

// // Function to remove duplicates
// void remove_duplicates(Node* head, Node* &newHead, Node* &newTail) {
//     Node* current = head;
//     while(current != NULL){
//         if (!exists(newHead, current->val)){
//             insert_tail(newHead, newTail, current->val);
//         }
//         current = current->next;
//     }
// }

// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;
//     int val;

//     // Read input values until -1
//     while (true) {
//         cin >> val;
//         if (val == -1) break;
//         insert_tail(head, tail, val);
//     }

//     Node* newHead = NULL;
//     Node* newTail = NULL;

//     // Remove duplicates
//     remove_duplicates(head, newHead, newTail);

//     // Print the final linked list
//     print_LL(newHead);

//     return 0;
// }




