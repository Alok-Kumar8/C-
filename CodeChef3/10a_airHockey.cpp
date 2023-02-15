#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ca = 7-a;
        int cb = 7-b;
        if(ca < cb){
            cout << ca << endl;
        }
        else{
            cout << cb << endl;
        }
    }
	return 0;
}
