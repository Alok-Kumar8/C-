#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int rem = x%4;
        int deg = 90*rem;
        if(deg == 90){
            cout << "East" << endl;
        }
        else if(deg == 180){
            cout << "South" << endl;
        }
        else if(deg == 270){
            cout << "West" << endl;
        }
        else if(deg == 0){
            cout << "North" << endl;
        }
    } 
	return 0;
}
