#include <iostream>
using namespace std;

struct node{
int data;
node *prev;
node *next;
node(int x)
{
    data = x;
    prev = NULL;
    next = NULL;
}
};

void printDLC(node *head)
{
    if(head == NULL)
       return;
    if(head->next == head)
        cout<<head->data;
    node *curr = head;

    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    while(curr != head);

    cout<<endl;
}

node *insertAtBegin(node *head,int x){
    node *temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = head;
    head->prev = temp2;
    printDLC(head);
    node *head1 = insertAtBegin(head, 5);
    printDLC(head1);
}
