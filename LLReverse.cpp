#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *reverseLL(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL)
    {
       Node *nxt = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nxt;
    }

    return prev;
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printlist(head);
	Node *NewHead = reverseLL(head);
	printlist(NewHead);
	return 0;
}
