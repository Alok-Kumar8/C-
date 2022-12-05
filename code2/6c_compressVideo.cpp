#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int n;
        cin >> n;
        int *p = new int[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        for(int i = 0;i <n; i++){
            if(p[i]==p[i+1]){
                count++;
            }
        }
        cout << n - count << endl;
        
    }
	return 0;
}
