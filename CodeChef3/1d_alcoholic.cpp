#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int a = k/2;
        if(k%2==0){
            cout << a*2 << endl;    
        }
        else{
            cout << (a*2) + 3 << endl;
        }
    }
	return 0;
}
