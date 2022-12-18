#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] ={5, 2, 6, 9, 1, 4, 3, 8};
    int count = 0;
    for(int i = 0; i < 8; i++){
        if(arr[i] < arr[0]){
            count++;
        }
    } 
    int temp = arr[count];
    arr[count] = arr[0];
    arr[0] = temp;
    // int a = 0;
    // int b = 7;
    // int temp1;
    // while(a < count && b > count){
    //     if(arr[a] > arr[count] && arr[b] < arr[count]){
    //         temp1 = arr[a];
    //         arr[a] = arr[b];
    //         arr[b] = temp1;
    //         a++;
    //         b--;
    //     }
    // }
    for(int  m = 0; m < 8; m++){
        cout << arr[m] << " ";
    }
    cout << endl;
}