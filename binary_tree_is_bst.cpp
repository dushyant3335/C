#include<iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
};
bool Is_greater(node*root,int data){
    if(root==NULL) return true;
    if(root->data>data && Is_greater(root->right,data) && Is_greater(root->left,data))
    return ture;
    else 
    return false;
}
bool Is_smaller(node*root,int data){
    if(root==NULL) return true;
    if(root->data<=data && Is_smaller(root->left,data) && Is_smaller(root->right,data))
        return true;
    else 
    return false;
}
bool Is_BST(node*root){
    if(root==NULL) return true;
    if(Is_smaller(root->left,root->data)&& Is_greater(root->right,root->data)&& Is_BST(root->left)&& Is_BST(root->right))
    return true;
    else return false;
}

int main(){

}