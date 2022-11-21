#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int input[100];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    int count_even = 0;
    int count_odd = 0;
    for(int j = 0; j < n; j++){
        if(input[j] % 2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    if(count_even > count_odd){
        cout << "READY FOR BATTLE" << endl;
    }
    else{
        cout << "NOT READY" << endl;
    }
	// your code goes here
	return 0;
}