#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int n;
        cin >> n;
        int *p = new int[n];
        for(int i=0; i< n; i++){
            cin >> p[i];
        }
        for(int i = 0;  i < n; i++){
            if(p[i]%2 != 0){
                count++;
            }
        }
        if(count%2 == 0 && count !=0){
            cout << "yes" << endl;
        }
        else{
            cout << " no" << endl;
        }
    }
	return 0;
}
