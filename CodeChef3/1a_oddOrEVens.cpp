#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum = a  +b;
        if(sum % 2 == 0){
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
        }
    }
	return 0;
}
