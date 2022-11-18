#include <iostream>
using namespace std;

int main() {

        int n, x;
        cin >> n;
        x = n % 3;
        if(x == 0){
            cout << "Normal" << endl;
        }
        else  if(x == 1){
            cout << "Huge" << endl;
        }
        else if(x == 2){
            cout << "Small" << endl;
        }
       
    
	// your code goes here
	return 0;
}
