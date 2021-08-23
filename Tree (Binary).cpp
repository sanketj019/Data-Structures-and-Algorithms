#include <iostream>
using namespace std;

struct node{
int data;
node *left;
node *right;
node(){
data = x;
left = right = NULL;
}
};

int main(){

node *root = new node(10);
root->left = new node(20);
root->right = new node(30);
root->left->left = new node(40);
}
