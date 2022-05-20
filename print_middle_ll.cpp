#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
struct node *head;

void Insert(int n)
{
    node *temp = new node();
    temp->data = n;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    };
    temp->next = head;
    head = temp;
}

int Middle()
{
    node *temp = head;
    int count;
    while (temp != NULL)
    {
        temp = temp->next;
        count = count + 1;
    }
    if (count % 2 == 0)
    {
        temp = head;
        int i = 1;
        while (i <= count)
        {
            cout << temp->data;
            temp = temp->next;
            i = i + 1;
        }
    }
}
int main()
{
    head = NULL;
    Insert(4);
    Insert(5);
    Insert(6);
    Insert(7);
    Middle();
    return 0;
}