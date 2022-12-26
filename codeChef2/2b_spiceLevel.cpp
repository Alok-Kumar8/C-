#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x < 4){
            cout << "mild" << endl;
        }
        else if(x >= 4 && x < 7){
            cout << "medium" << endl;
        }
        else{
            cout << "hot" << endl;        }
    }
	return 0;
}
