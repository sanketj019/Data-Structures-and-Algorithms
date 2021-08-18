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

void printDL(node *head)
{
    if(head == NULL)
        return;
    if(head->next == NULL)
        cout<<head->data;
    node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

node *insertAtEnd(node *head, int x)
{
    node *temp = new node(x);
    if(head == NULL)
        return temp;

    node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;
    return head;



}

int main()
{
    node *head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    printDL(head);
}
