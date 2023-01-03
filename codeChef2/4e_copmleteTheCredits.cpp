#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x > 65){
            cout << "Overload" << endl;
        }
        else if(x < 35){
            cout << "Underload" << endl;
        }
        else{
            cout << "Normal" << endl;
        }
    }
	return 0;
}
