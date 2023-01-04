#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int salary;
        cin >> salary;
        if(salary < 1500){
            cout <<fixed << setprecision(2) << salary + 0.1*salary + 0.9*salary << endl;
        }
        else{
            cout <<fixed << setprecision(2) << salary + 500 + 0.98*salary << endl;
        }
    }
	return 0;
}
