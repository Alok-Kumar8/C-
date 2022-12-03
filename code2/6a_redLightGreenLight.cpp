#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        int count = 0;
        cin >> n >> k;
        int *p = new int[n];
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        for(int i = 0; i < n; i++){
            if(p[i] > k){
                count++;
            }
        }
        cout << count << endl;
    }
	return 0;
}
