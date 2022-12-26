#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int size= n/k;
        cout << size*size << endl;
    }
	return 0;
}
