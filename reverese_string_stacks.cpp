#include<iostream>
#include<stack>
using namespace std;

int strlen(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i=i+1;
    }
    return i;
}
// class Stack{
//     private:
//     char A[101];
//     int top;
//     public:
//     void Push(int x);
//     void Pull();
//     void Top();
//     bool IsEmpty();
// };
void Reverse(char *a,int n){
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        S.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=S.top();
        S.pop();
    }
    
}

int main(){
    char C[51]="Hello";
    cout<<"Enter your string:";
    Reverse(C,strlen(C));
    cout<<C;
    return 0;
}