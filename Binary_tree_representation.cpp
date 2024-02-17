#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value);

};
Node::Node(int value){
 data=value;   
 right=NULL;
 left=NULL;
}
int main(){
    Node *root;
    root = new Node(1);
    Node *node2=new Node(2);
    Node *node3=new Node(3);
    Node *node5=new Node(5);
    root->left=node2;
    root->right=node3;
    cout<<(node3->data)<<endl;






}