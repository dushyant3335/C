#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};
struct node*head;
void Insert(int data){
    node*temp=new node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next=head;
    head=temp; 
}
void Delete(node*p){
    if(p==head){
        head=p->next;
    }
    node*temp2;
    temp2->next=p;
    temp2->next=p->next;
    delete p;
}
void Print(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->next;
        temp=temp->next;
    }
}

int main(){
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    cout<<"before deletion:";
    Print();
    Delete(head);
    cout<<"after deletion";
    Print();
    return 0;
}