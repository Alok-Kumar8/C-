#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        int x, y, a, b;
        cin >> x >> y >> a >>b;
        int chefT = x + (a*10);
        int chefinaT = y + (b*10);
        if(chefT > chefinaT){
            cout << "Chefina" << endl;
        }
        else if(chefT < chefinaT){
            cout << "Chef" << endl;
        }
        else if(chefT == chefinaT){
            cout << "Draw" << endl;
        }
    }
	return 0;
}
