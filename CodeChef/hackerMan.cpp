#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    int a, b;
    cin >> a >> b;
    int sum = a + b; 
    bool ans = isPrime(sum);
    if(ans == true){
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
    }
    }
	// your code goes here
	return 0;
}
