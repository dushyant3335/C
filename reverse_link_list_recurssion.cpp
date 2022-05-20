#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};
struct node*head;
void Reverse(struct node* p){
    head = p;
    if(p->next==NULL){
        head = p;
        return;
    }
    Reverse(p->next);
    struct node*q = p->next;
    q->next=p;
    p->next=NULL;
}

int main(){

    return 0;
}