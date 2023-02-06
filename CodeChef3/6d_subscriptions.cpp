#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int rem = n/6;
        if(n < 6){
            cout << x << endl;
        }
        else if(n%6==0){
            cout << rem*x << endl;
        }else{
            cout << rem*x + x << endl;
        }
    }
	return 0;
}
