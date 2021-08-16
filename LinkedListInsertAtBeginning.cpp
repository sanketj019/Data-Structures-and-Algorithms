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

node *insertAtBeginning(node *head, int x)
{
    node *node1 = new node(x);
    node1->next = head;
    node1->data = x;
    return node1;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    node *head1 = insertAtBeginning(head,30);
    cout<<head1->data;
    return 0;

}