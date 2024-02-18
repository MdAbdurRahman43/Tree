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
    left=NULL;
    right=NULL;

}
void tree_traveral(Node *root){
    if (root==NULL){
      return;
    }
    tree_traveral(root->left);
    cout<<root->data<<" ";
    tree_traveral(root->right);
}
void tree_inoreder_traveral(Node *root){
    stack<Node*> stk;
    stk.push(root);
    vector<int> ans;
    while(!stk.empty()){
        Node *node=stk.top();
        stk.pop();
        ans.push_back(node->data);
        if(node->right!=NULL){
          stk.push(node->right);
        }
        if(node->left!=NULL){
          stk.push(node->left);
        }

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
int main(){
     Node *root;
    root = new Node(1);
    Node *node2=new Node(2);
    Node *node3=new Node(3);
    Node *node4=new Node(4);
    Node *node5=new Node(5);
    Node *node6=new Node(6);
    Node *node7=new Node(7);
    root->left=node2;
    root->right=node3;
    node2->left=node4;
    node2->right=node5;
    node3->left=node6;
    node3->right=node7;
    
   tree_inoreder_traveral(root);

}