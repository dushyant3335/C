#include<iostream>
using namespace std;

struct bstnode{
      int data;
      bstnode*left;
      bstnode*right;
};

bstnode* Insert(int n,bstnode*root){
    bstnode*temp=new bstnode();
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL){
        root=temp;
    }
    else if(n<=root->data){
        root->left=Insert(n,root->left);
    }
    else
    root->right=Insert(n,root->right);
    return root;
}

bool Search(bstnode* root,int n ){
      if(root==NULL) return false;
      else if(n==root->data) 
      return true;
      else if(n<=root->data)
      return Search(root->left,n);
      else
      return Search(root->right,n);
}

int main(){
      bstnode*root=NULL;
      root = Insert(15,root);
      root = Insert(20,root);
      root = Insert(10,root);
      if(Search(root,1)==true) cout<<"Found";
      else cout<<"not found";
      return 0;
}