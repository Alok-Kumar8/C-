#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *p = new int[n];
         int arr[n-1];
        for(int i = 0; i< n;i++){
            cin >> p[i];
        }
        sort(p, p+n);
        for(int i=0;i<n;i++){
            arr[i]= p[i+1]-p[i];
        }
        int a = INT_MAX;
        for(int i = 0; i <n -1;i++){
            if(arr[i] <=a){
                a=arr[i];
            }
        }
        cout << a << endl;
        
    }
	return 0;
}
