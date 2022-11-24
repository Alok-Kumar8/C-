#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c, d;
        cin >> c >> d;
        if(c >= a && d >= b){
            cout << "possible" << endl;
        }
        else{
            cout << "impossible" << endl;
        }
        
    }
    
	// your code goes here
	return 0;
}
