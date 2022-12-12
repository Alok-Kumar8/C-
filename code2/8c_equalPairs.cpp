#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
       int maxcount = 0;
       for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }
 
        if (count > maxcount) {
            maxcount = count;
        }
    }
    cout << n - maxcount << endl;
    }
	return 0;
}
