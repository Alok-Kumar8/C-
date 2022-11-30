#include <iostream>
using namespace std;

int main(){
        int p, q;
        cin >> p >> q;
        if((p + q) % 4 < 2){
            cout << "alice" << endl;
        }
        else{ 
            cout << "bob" << endl;
        }
	return 0;
}
