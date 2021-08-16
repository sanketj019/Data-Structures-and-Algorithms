#include <bits/stdc++.h> 
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

Node *insertAtPos(Node *head, int pos)
{
    Node *curr = head;
    Node *temp = new Node(25);
    if(pos == 1)
    {
        temp->next = curr;
        return temp;
    }
    int i=1;
    while(i<pos-1 && curr != NULL)
       { curr = curr->next;
        i++;}
    if(curr == NULL)
        return head;

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=insertAtPos(head, 2);
	printlist(head);
	
	return 0;
} 