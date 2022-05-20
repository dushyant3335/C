#include<iostream>
#include<stack>
using namespace std;

int strlen(char*c){
    int i=0;
    while(c[i]!='\0'){
        i=i+1;
    }
    return i;
}
void Balanced(char *c,int n){
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        if(c[i]=='('||c[i]=='{'||c[i]=='['){
            S.push(c[i]);
        }
        else if(c[i]==')'||c[i]=='}'||c[i]==']'){
            if(S.empty()){
                cout<<"Not match";
            }
            else{
                S.pop();
            }
        }

    }
    
}

int main(){
    char C[100]={"{{}}({})"};
    return 0;
}