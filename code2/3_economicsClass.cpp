#include <iostream>
using namespace std;

int main() {
        int count = 0;
        int n;
        cin >> n;
        int *s = new int[n];
        int *d = new int[n];
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        for(int i = 0; i < n; i++){
            cin >> d[i];
        }
        for(int j = 0; j < n; j++){
            if(s[j] == d[j]){
                count++;
            }
        }
        cout << count << endl;
    
	return 0;
}
