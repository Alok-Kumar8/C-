#include <bits/stdc++.h>
using namespace std;

void pass_array(int b[] , int n){
    for(int i=0; i<n; i++){
        cout<< b[i]<<" ";
    }
    cout<< endl;
}

int main(){
    int n;
    int input[10];
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> input[i];
    }

    pass_array(input , n);
}