#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int j=5;
        while(j>=i){
            cout<<i;
            j--;
        }
        int stars=1;
        while(stars<=i-1){
            cout<<"*";
            stars++;
        }
        cout<<endl;
        i++;

    }
}