#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node(int d){
        data = d;
    }
};

int findPosition(node *head, int x);
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    int x;
    cout<<"Enter no to find";
    cin>>x;
    int y = findPosition(head, x);
    cout<<y;
    return 0;
}

int findPosition(node *head, int x)
{
    int pos = 1;
    while(head != NULL)
    {
        if(head->data == x)
        return pos;

        else
        {
            head = head->next;
            pos++;
        }
    }
    return -1;
}