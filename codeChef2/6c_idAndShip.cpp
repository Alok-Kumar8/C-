#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char a;
        cin >> a;
        if(a=='B' || a=='b'){
            cout << "BattleShip" << endl;
        }
        else if(a=='C' || a=='c'){
            cout << "Cruiser" << endl;
        }
        else if(a=='D' || a=='d'){
            cout << "Destroyer" << endl;
        }
        else if(a=='F' || a=='f'){
            cout << "Frigate" << endl;
        }
    }
	return 0;
}
