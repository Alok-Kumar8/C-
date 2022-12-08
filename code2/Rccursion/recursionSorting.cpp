#include <bits/stdc++.h>
using namespace std;

bool sorted(int a[], int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(a[0] > a[1]){
        return false;
    }

    bool sortedArray = sorted(a + 1, size - 1);
    return sortedArray;
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    bool ans = sorted(arr, 6);
    cout <<ans << endl;
}