#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createTree(){
   int value;
   cin>>value;

   if(value==-1){
    return NULL;
   }
   else{
    Node* root=new Node(value);
    cout<<root->data<<" ";

    root->left=createTree();
    root->right=createTree();
    return root;

   }
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    
}
void inOrderTraversal(Node* root){
    if(root==NULL){
        return;

    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void levelOrderTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
       Node* front=q.front();
       q.pop();

       if(front==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
       }
       else{
        cout<<front->data<<" ";

        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
       }
    }

}
int main(){
   Node* root=createTree();
   
 cout << "Level Order Traversal:\n";
    levelOrderTraversal(root);

    cout << "\nPreorder Traversal:\n";
    preOrderTraversal(root);

    cout << "\nInorder Traversal:\n";
    inOrderTraversal(root);

    cout << "\nPostorder Traversal:\n";
    postOrderTraversal(root);

   
    return 0; 
}