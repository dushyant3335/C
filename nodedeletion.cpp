#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};
struct node*head;

void Insert(int num, int place){
    node*temp1 = new node();
    temp1->data = num;
    temp1->next = NULL;
    if(place==1){
        temp1->next=head;
        head = temp1;
        return;
    }
    for (int i = 0; i < place-2; i++)
    {
        temp1 = temp1->next;
    }
    node*temp2=temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Print(){
    node*temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void Delete(int place){
    node*temp1 = head;
    node*temp2 = head;
    if(place==1){
        head = temp1->next;
        return;
    }
    for (int i = 0; i < place-2; i++)
    {
        temp2 = temp1->next;
    }
    temp1->next = temp2->next;
    delete temp2;
}

int main(){
    head = NULL;
    Insert(2,1);
    Insert(4,2);
    Insert(6,3);
    Insert(5,4);

    Delete(2);
    Print();
    return 0;
}