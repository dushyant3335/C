#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;  
};
struct node * head;
void Insert(int num , int place){
    node*temp1=new node();
    temp1->data = num;
    temp1->next = NULL;
    if(place==1){
        temp1->next=head;
        head = temp1;
        return;
    }
    node*temp2 = head;
    for (int i = 0; i < place-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Print(){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    Insert(1,1);
    Insert(2,2);
    Insert(3,3);
    Insert(4,3);
    Insert(5,1);
    Print();
    return 0;
}