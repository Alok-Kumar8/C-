#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x< y){
            cout << "profit" << endl;
        }
        else if(x==y){
            cout << "neutral" << endl;
        }
        else if(x>y){
            cout << "loss" << endl;
        }
    }
	return 0;
}
