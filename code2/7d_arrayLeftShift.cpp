#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int n;
    cin >> n;
    for(int i = 0; i< n;i++){
        cin >> a[i];                        // array input
    }

    int temp = a[0];                       // keeping the first element
    for(int i = 0; i < n -1 ; i++){
        a[i] = a[i+1];                     // shifting all the other element to the left 
    }
    a[n-1]=temp;                           // placing the first element to the last position
    for(int i = 0; i< n;i++){
        cout << a[i] <<" ";
    }
}