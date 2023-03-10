#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void circulartraversal(struct Node* head){
    struct Node* p = head;

    while(p->next != head){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<p->data<<" ";        
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    struct Node* sixth;

    head  = new Node;
    second  = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;
    sixth = new Node;

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = fifth;

    fifth->data = 25;
    fifth->next = sixth;

    sixth->data = 30;
    sixth->next = head; 

    circulartraversal(head);

    return 0;
}