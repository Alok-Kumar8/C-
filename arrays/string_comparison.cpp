#include <bits/stdc++.h>
using namespace std;

int main(){
    char input1[100];
    char input2[100];
    cin.getline( input1 , 20);
    cin.getline( input2, 20);  

    if(strcmp(input1,input2)==0){
        cout << "true"<<endl;
    }
    else{
        cout<< "false" << endl;
    }
}