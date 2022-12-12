#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    while(num--){
        int size;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
        cin >> arr[i];
        }
            sort(arr,arr+size);
        for(int i = 0; i < size; i+=2){
            if(arr[i] != arr[i+1]){
           cout << arr[i]<< endl;
                 break;
            }
        }
    }
    
	return 0;
}
