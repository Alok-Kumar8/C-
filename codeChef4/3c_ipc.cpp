#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k; 
    int count = 0;
    while(n>0){
    int *p = new int[k+1];
    for(int i=0; i<k+1; i++){
        cin >> p[i];
    }
    int sum = 0;
    
    for(int i = 0; i<k; i++){
        sum+=p[i];
    }
    if(sum>=m && p[k]<=10){
        count++;
    }
    n--;
    }
    cout << count << endl;
	return 0;
}
