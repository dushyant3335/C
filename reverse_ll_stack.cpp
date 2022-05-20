#include<iostream>
#include<stack>
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

void Reverse(){
    if(head==NULL) return;
    node*temp=head;
    stack<struct node*>S;
    while(temp!=NULL){
        S.push(temp);
        temp=temp->next;
    }
    temp=S.top();
    head=temp;
    while(!S.empty()){
        S.top()=temp->next;
        S.pop();
        temp=temp->next;
    }
    temp->next=NULL;
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
    return 0;
}
int main(){
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Print();
    Reverse();
    Print();
    return 0;
}