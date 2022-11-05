#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[] , int n, int x){
    int find = x;
    for(int i = 0; i<n; i++){
        if(a[i] == find){
            return i ;
        }
    }
}

void print(int a[] ,  int n){
    for(int  i = 0; i<n; i++){
        cout << a[i] <<" ";
    }
}

int main(){
    int a[50];
    int n;
    cin >> n;
    int x;
    cin >> x;
    for(int i = 0; i<n; i++){
        cin >> a[i] ;
    }

    cout << linearSearch(a , n, x) << endl ;
  
}