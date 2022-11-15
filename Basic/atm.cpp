#include <bits/stdc++.h>
using namespace std;

int main(){
  
int x;
float y;
cin >> x >> y ;
if ((x % 5 == 0) && (y - x - 0.5 > 0)){
    cout << y - x - 0.5 << endl;
}
else{
    cout << y << endl;
}
}

