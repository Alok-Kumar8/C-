#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >>  y2>> z1 >> z2;
        if(x2 >= x1){
            if(y2 >= y1){
                if(z2 <= z1){
                    cout << "yes" << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
            else{
                cout << "no" << endl;
            }
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
