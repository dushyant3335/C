#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head;

void Insert(int num , node*head){
    node*temp=new node();
    temp->data=num;
    temp->next=NULL;
    if(head==NULL) head = temp;
    else{
        node*temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
}

struct node* Reverse(struct node* head){
    struct node*temp,*prev,*forw;
    temp=head;
    prev=NULL;

    while(temp!=NULL){
        forw=temp->next;
        prev=temp;
        temp=forw;
    }
    head=prev;
    return head;
};

void Print(struct node* p){
    if(p==NULL)
    return;
    cout<<p->next;
    Print(p->next);
}

int main(){

    return 0;
}
