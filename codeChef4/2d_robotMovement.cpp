#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
       int n, x;
       cin >> n >> x;
       string s;
       cin >> s;
       for(int i=0; i<n; i++){
           if(s[i]=='R'){
               x++;
           }
           else if(s[i]=='L'){
               x--;
           }
       }
       cout << x << endl;
    }
	return 0;
}
