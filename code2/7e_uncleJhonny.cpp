#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *p  = new int[n];
        for(int i=0; i < n; i++){
            cin >> p[i];
        }
        int k;
        cin >> k;
        
        int initial = p[k-1];
        // for(int i = 0;i<n;i++){
        //     if(i==k){
        //         initialPos=p[i];
        //     }
        // }
        
        sort(p, p+n);
        int i;
        for(i =0; i < n;i++){
            if(p[i]==initial){
                break;
            }
        }
        cout << i+1<< endl;
    }
	return 0;
}
