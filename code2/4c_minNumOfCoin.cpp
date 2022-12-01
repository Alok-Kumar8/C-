#include <iostream>
using namespace std;

int main() {
  
    int x;
    cin >> x;
    int quo = x/10;
    int ans  = x % 10;
    int rem = ans/5;
    if(x % 10 == 0){
        cout << quo << endl;
    }
    else if(ans%5 == 0){
        cout << quo + rem << endl;
    }
    else{
        cout << -1 << endl;
    }

	return 0;
}
