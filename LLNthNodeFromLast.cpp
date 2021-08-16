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

void printNthNodeFromEnd(Node * head, int x){
    Node *curr = head;
    int count1 =1;
    while(curr->next != NULL)
    {
        count1++;
        curr =curr->next;
    }
    curr = head;
    int pos = count1 - x +1;
    for(int i =1; i<pos; i++)
    {
        curr = curr->next;
    }
    cout<<curr->data;
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printNthNodeFromEnd(head, 4);
	return 0;
}
