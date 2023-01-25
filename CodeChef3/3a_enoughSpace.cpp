#include <iostream>
using namespace std;

int main() {
    int t;
     cin >> t;
     while(t--){
         int n, x, y;
        cin >> n >> x >> y;
        if(n >= x+2*y){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
     }
	return 0;
}
