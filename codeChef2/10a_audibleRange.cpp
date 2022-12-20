#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x >= 67 && x <= 45000){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
