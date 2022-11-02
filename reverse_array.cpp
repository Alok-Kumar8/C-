#include <bits/stdc++.h>
using namespace std;

void pass_array(int b[] , int n){
    for(int i=0; i<n; i++){
        cout<< b[i]<<" ";
    }
    cout<< endl;
}

void reverse(int b[], int n){
    int i=0; int j=n-1;
    while(i<j){
        int temp= b[i];
        b[i]= b[j];
        b[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int n=5;
    int b[5]={1, 2,3 ,4 ,5};
    reverse(b,5);
    pass_array(b,5);
}