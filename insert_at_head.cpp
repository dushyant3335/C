#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};
struct node*head;
void Insert(int n){
    node*temp=new node();
    temp->data=n;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next=head;
    head=temp;
}
void Print(){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    return 0;
}