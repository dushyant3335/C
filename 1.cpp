#include <iostream>
using namespace std;

int Max(int a[],int n){
    int max;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]) max=a[i];
    }
    return max;
}
// bool fit(int a[],int max,int n){
    
// }
int index(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]);
        return i;
    }
}
int main(){
    int test;
    cin>>test;
    while(test>0){
        int n;
        cin>>n;
        int a[n];
        int sq[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sq[i]==a[i]*a[i];
        }
        int sum;
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                sum=+sq[i];
            }
            if(2*sq[i]==sum){
                cout<<"YES";
            }
            else cout<<"NO";
            break;
        }
    }
    return 0;
}