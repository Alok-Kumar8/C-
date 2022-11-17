#include <bits/stdc++.h>
using namespace std;

int main() {
        int ans = INT_MIN;
        int n;
        cin >> n;
        int *p = new int[n];
        for(int i = 0;i < n; i++){
            cin >> p[i];
        }
        for(int j = 0; j < n; j++){
            if(p[j] > ans){
                ans = p[j];
            }
        }
        cout << ans << endl;
        
    

    delete [] p;
	// your code goes here
	return 0;
}
