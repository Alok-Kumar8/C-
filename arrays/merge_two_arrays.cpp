#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1 = 5;
    int n2 = 4;
    int arr1[] = {2, 4,6, 8,14};
    int arr2[] = {3,5,7,9};
    int arr3[n1 + n2];
    
    int i=0, j=0, k=0;
    while(i < n1 && j < n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;   
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }

    }
    while(i<n1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(i<n2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

    for(int k=0; k<n1+n2; k++){
        cout<< arr3[k]<< " " ;
    }
    cout<< endl;
}
