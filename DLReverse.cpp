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

node *reverseDL(node *head)
{
    if(head == NULL || head->next == NULL)
        return head;

    node *curr = head;
    node *prev = NULL;
    while(curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

int main()
{

    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->prev = NULL;
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = NULL;
    printDL(head);
    node *head1 = reverseDL(head);
    printDL(head1);
    return 0;
}
