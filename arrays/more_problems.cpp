#include <iostream>
using namespace std;

int main() {
    int input[10];
    int count = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    for(int i = 0; i < n;  i++){
    if(input[i] >= 10){
        count++;
    }
    }
    cout << count << endl;
	
	return 0;
}
