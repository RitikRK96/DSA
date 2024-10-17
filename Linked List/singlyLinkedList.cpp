#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node *next;
        
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}


void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}


void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;
}

int main(){
    node *node1 = new node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    node *head = node1;
    node *tail = node1;
    
    insertAtHead(head, 12);
    insertAtHead(head, 18);
    insertAtHead(head, 14);
    print(head);
    insertAtTail(tail, 29);
    insertAtTail(tail, 21);
    insertAtTail(tail, 26);
    print(head);
} 