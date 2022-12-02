#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, a;
        cin >> x >> y >> a;
        if((x - y) <= a){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        
    }
	// your code goes here
	return 0;
}
