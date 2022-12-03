#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a==b && c==d){
            cout << "YES" << endl;
        }
        else if(a==c && b==d){
            cout << "YES" << endl;
        }
        else if(a==d && c==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
