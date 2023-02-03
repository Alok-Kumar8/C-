#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    int **p = new int*[m];             // create a array used to store m pointers.
    for(int i = 0; i < 5; i++){
        p[i] = new int[n];            // each row is assigned n cols.
    }
    for(int i = 0; i < m; i++){
        delete [] p[i];              // first delete the cols. then the row
    }
    delete [] p;
}