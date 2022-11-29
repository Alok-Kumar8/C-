#include <iostream>
using namespace std;

int main() {
        int x, y, z;
        cin >> x >> y >> z;
        if(x + 2*z >= y){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
	return 0;
}
