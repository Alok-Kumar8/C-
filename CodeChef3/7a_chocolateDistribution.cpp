#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y, z;
        cin >> x >> y >> z;
        int sum = x + y + z;
         if(sum >= 6){
            cout << "yes" << endl;
            }
          else{
            cout << "no" << endl;
          }
    }
	return 0;
}
