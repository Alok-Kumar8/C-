#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int m, n;
    cin >> m >> n;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<n;i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum =sum+a[j][i];
         
        }
        cout<< sum<< " ";
    }
    
    
}