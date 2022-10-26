#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=1;
    int k=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<k+j;
            j+=1;
        }
        cout<<endl;
        k+=1;
        i+=1;
    }
}