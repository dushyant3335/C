#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void Insert(int n){
    node*temp=new node();
    temp->data=n;
    node*temp2=head;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    while(temp2!=NULL){
          if(temp2->next==NULL) temp2->next=temp;
    }
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