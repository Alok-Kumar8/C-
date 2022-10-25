#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<k;
            j+=1;
        }
        cout<<endl;
        k+=1;
        i+=1;
    }
}