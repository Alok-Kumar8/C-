#include <iostream>
using namespace std;

int main() {
        int x, a, b;
        cin >> x >> a >> b;
        int sum = a+b;
        if(x >= sum){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
	return 0;
}