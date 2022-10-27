#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int i=1;
    while (i<=n){
        int spaces =1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int k=1;
        while(k<=i){
            cout<<'*';
            k++;
        }
        cout<<endl;
        i++;
    }
}