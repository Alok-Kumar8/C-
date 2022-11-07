#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int new_array[50];  
    int sum=0;
    for(int j=0;j<n;j++){
        cin>>new_array[j];
    }
    for(int i=0;i<n;i++){
        sum=sum+new_array[i];
    }
    cout<<sum<<endl;
}