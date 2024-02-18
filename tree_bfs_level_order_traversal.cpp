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
void level_order_traversal(Node *root){
    queue<Node*> q;
    q.push(root);
    vector<vector<int>> ans;
    while(!q.empty()){
        int size=q.size();
       
        vector<int> lst;
        for(int i=0;i<size;i++){
            Node *node=q.front();
            lst.push_back(node->data);
            q.pop();
            if (node->left!=NULL) q.push(node->left);
            if (node->right!=NULL) q.push(node->right);
            


        }
        // for(int i=0;i<lst.size();i++){
        //     cout<<lst[i]<<" ";
        // }
        // cout<<endl;
        ans.push_back(lst);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

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
    level_order_traversal(root);
   // tree_traveral(root);

}