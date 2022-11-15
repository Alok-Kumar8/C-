#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(1.07*x >= y){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	// your code goes here
	return 0;
}
