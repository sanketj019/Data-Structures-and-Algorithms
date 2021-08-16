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

node *insertAtEnd(node *head, int x)
{
  while(head->next != NULL)
    {
        head = head->next;
    }
    node *last = new node(x);
    head->next = last;
    return last;

}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    
    node *last = insertAtEnd(head, 30);
    cout<<last->data<<endl;
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    
}
    return 0;
}

//with corner cases

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}
int main() 
{ 
	Node *head=NULL;
	head=insertEnd(head,10);
	head=insertEnd(head,20);
	head=insertEnd(head,30);
	printlist(head);
	return 0;
} 