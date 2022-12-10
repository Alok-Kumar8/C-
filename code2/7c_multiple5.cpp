#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        string n;
        cin >> n;
        if(n.find('0')<d || n.find('5')<d){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
