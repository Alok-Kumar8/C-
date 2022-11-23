#include <bits/stdc++.h>
using namespace std;

int twoSum(int p[], int n, int target){
     for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j  < n; j++){
            if(i != j && p[i] + p[j] == target){
                return j; 
            }
        }
    }
}

int main(){
    int target;
    cin >> target;
    int n;
    cin >> n;
    int p[100];

    int ans = twoSum(p, n, target);
    cout << ans << endl;

 
}