#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int *a = new int[n];
        int *b = new int[n];
        for(int  i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int count = 0;
        for(int j = 0;j < n; j++){
            if(a[j] >= k){
                count+=b[j];
            }
        }
        cout << count << endl;
    }
	return 0;
}
