#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if(sum < 3){
            cout << 1 << endl;
        }
        else if(sum >= 3 && sum <= 10){
            cout << 2 << endl;
        }
        else if(sum >=11 && sum <= 60){
            cout << 3 << endl;
        }
        else if(sum > 60){
            cout << 4 <<endl;
        }
    }
	return 0;
}
