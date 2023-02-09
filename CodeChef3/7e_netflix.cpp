#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        if(a+b>=x || b+c>=x || c+a>=x){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
