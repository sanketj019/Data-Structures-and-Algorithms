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
}

int main(){
node *head = new node(10);
head->next = new node(20);
head->next->next = new node(30);
head->next->next->next =head;

printCL(head);
}
