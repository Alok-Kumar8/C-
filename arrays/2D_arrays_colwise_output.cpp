#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int m;
    int n;
    cin >> m >> n;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<m ;j++){
            cout << a[j][i] << " " ;
        }
        cout<< endl;
    }
}