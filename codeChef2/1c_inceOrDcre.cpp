#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%4==0){
        n+=1;
        cout << n << endl;
    }
    else{
        n-=1;
        cout << n << endl;
    }
	return 0;
}
