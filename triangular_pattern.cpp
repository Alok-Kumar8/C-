#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k++;
        }
        
        cout<<endl;
        i++;
    }
}