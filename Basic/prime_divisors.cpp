#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    
    while(n <= 1){
        return false;
    }
    for(int  i = 2; i < n; i ++){
        if(n % i ==0){
            return false;
        }
         return true;
    }
   
}

void primeDivisors(int x){
   for(int i = 0; i < x; i++){
        if(isPrime(i)){
            if(x % i == 0){
                cout << i << " ";
            }
        }
    } 
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    primeDivisors(n);
}