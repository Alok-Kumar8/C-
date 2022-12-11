#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n, x, c;
        cin >> n >> x >> c;
        int *p = new int[n];
        for(int i = 0; i<n;i++){
            cin >>p[i];
        }
        int cost = 0;
        for(int i=0;i<n;i++){
            if(x-p[i]>c){
                p[i]=x;
                cost= cost+c;
            }
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum+p[i];
        }
        
        cout << sum-cost << endl;
        
    }
	return 0;
}
