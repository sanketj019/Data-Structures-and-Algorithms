#include <iostream>
using namespace std;

struct node{
int data;
node *left;
node *right;

node(int x)
{
    data = x;
    left = right = NULL;
}

};

void printKthDistNode(node *root, int k)
{
    if(root == NULL) return;
    if(k == 0) cout<<root->data<<" ";
    else
    {
        printKthDistNode(root->left, k-1);
        printKthDistNode(root->right, k-1);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    printKthDistNode(root, 2);
}
