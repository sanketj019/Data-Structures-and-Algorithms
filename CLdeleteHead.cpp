#include <iostream>
using namespace std;

struct node{
int data;
node *next;

node(int x){
data = x;
next = NULL;
}
};

void printCL(node *head)
{
    node *curr = head;
    if(head == NULL) return;
    if(head->next == head)
    {
        cout<<head->data;
        return;
    }
     do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    while(curr != head);
    cout<<endl;

}

node *deleteHead(node *head)
{
    if(head == NULL) return NULL;
    if(head->next == head)
    {
        delete(head);
        return NULL;
    }
    node *temp = head->next;
    head->data = head->next->data;
    head->next = head->next->next;
    delete(temp);
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;

    printCL(head);
    node *head1 = deleteHead(head);
    printCL(head1);
}
