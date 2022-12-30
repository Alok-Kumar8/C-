
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int final = x+y;
        if(final % 2 == 0){
            cout << "Janmansh" << endl;
        }
        else {
            cout << "Jay" << endl;
        }
    }
	return 0;
}
