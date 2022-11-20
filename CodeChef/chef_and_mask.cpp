#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(100*x >= 10*y){
            cout << "cloth" << endl;
        }
        else if(100*x < 10*y){
            cout << "Disposable" << endl;
        }
    }
	// your code goes here
	return 0;
}