#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *ptr);

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    print(head);
    return 0;
}

void print(node *ptr)
{
    if(ptr == NULL)
        return;

   cout<<ptr->data<<" ";
   print(ptr->next);
}