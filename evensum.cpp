#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int sum=0;
    int n=1;
    while(n<=a){

    if(n%2==0){
        sum=sum+n;
        cout<<sum<<endl;
    }n+=1;
    }

}