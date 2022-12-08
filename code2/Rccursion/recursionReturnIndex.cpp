#include <bits/stdc++.h>
using namespace std;

int returnIndex(int a[], int n, int target){
    if(n == 0){
       return -1;
    }

    if(a[0]== target){
        return 0;
    }

    int index = returnIndex(a + 1 , n - 1, target);
    if(index == -1){
        return -1;
    }
    else{
    return index + 1;
    }
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;

   
    int ans  = returnIndex(arr , n, target);
    cout << ans << endl;
}