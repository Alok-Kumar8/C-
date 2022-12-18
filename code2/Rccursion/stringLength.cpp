#include <bits/stdc++.h>
using namespace std;

int length(char c[]){
    if(c[0]=='\0'){
        return 0;
    }

    int smallStringLength = length(c+1);
    return 1+smallStringLength; 
}

int main(){
    char c[100];
    cin >> c;

    cout << length(c) << endl;
}