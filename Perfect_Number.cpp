#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int n=x;
    int sum=0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
        }
    }
     if(n==sum){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}