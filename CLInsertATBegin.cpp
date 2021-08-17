#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printCL(node *head)
{
    if(head == NULL) return;
    node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    while(curr != head);
    cout<<endl;
}

node *insertAtBegin(node *head, int x)
{
    node *curr = head;
    node *temp = new node(x);
    if(head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head;
    while(curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return temp;

    //in efficient solution :
    //for doing this in O(1) time we can insert new node in middle of 1st and 2nd node and then swap the values among them.
}

int main(){
node *head = new node(10);
head->next = new node(20);
head->next->next = new node(30);
head->next->next->next =head;
printCL(head);
node *head1 = insertAtBegin(head, 5);
printCL(head1);
}
