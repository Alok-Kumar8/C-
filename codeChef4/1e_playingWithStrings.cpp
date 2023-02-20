#include <iostream>
using namespace std;

int count(int arr[], int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        if(arr[i]==0){
            sum++;
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *p = new int[n];
        int *q = new int[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        for(int j = 0; j < n; j++){
            cin >> q[j];
        }
        int a = count(p, n);
        int b = count(q, n);
        if(a == b){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
