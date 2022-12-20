#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x < 3){
            cout << "light" << endl;
        }
        else if(x >= 3 && x < 7){
            cout << "moderate" << endl;
        }
        else{
            cout << "heavy" << endl;
        }
    }
	return 0;
}
