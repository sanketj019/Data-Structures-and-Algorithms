#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};

void print(node *head);
int main()
{
    //using new keyword.
    node *head = new node(10);
    head->next =new node(20);
    head->next->next= new node(30);

    //using normal method.
    node node4(40);
    node *temp3 = head->next->next;
    temp3->next = &node4;
    //traversing through list and printing data.
    print(head);
    return 0;
}

void print(node *head){
    node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}


