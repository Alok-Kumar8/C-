#include <bits/stdc++.h>
using namespace std;

int main(){
    
    char name[30];
    char replace='x';
    char reject = 'a';
    cin >> name;
    for(int i=0; name[i]!='\0'; i++){
        if(name[i] == 'a'){
            name[i]='x';
        }
    }
    cout<< "new name: " << name << endl;
    
}