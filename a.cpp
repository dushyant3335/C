#include <iostream>

using namespace std;
 
 int power(int n,int p){
    int sum;
    for (int i = 0; i < p; i++)
    {
        sum=sum*n;
    }
    return sum;
 }

int main(){
    int test;
    cin>>test;
    while(test>0){
        int n;
        cin>>n;
        int a[n];
        long sq[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
              
              sq[i]= power(2,a[i]);
        }
        long sum=0;
        int z=0;
        sort(sq,sq+n);
        for(int i=0;i<n-1;i++){
              sum=sum+sq[i];
        }
        if(sq[n-1]==sum) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        test=test-1;
    }
    return 0;
}