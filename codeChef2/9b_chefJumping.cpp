#include <iostream>
using namespace std;

int main() {
    int long a;
    cin >> a;
    a=a%6;
    if(a==0 || a==1 || a==3){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
	return 0;
}
