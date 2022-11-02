#include <bits/stdc++.h>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i]!='\0' ; i++){
        count++;
    }
    return count;
}

void reverseArray(char input[]){
    int len = length(input);
    int i=0, j=len -1;
    while(i<j){
        char temp = input[i];
        input[i]= input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

 void reverseWord(char input[]){
    reverseArray(input);
    for(int i = 0 ; input[i]< ' ' ; i++){
        char temp = input[i];
    }
}

int main(){
    char input[30];
    cin.getline(input , 30);
    reverseArray(input);
    cout << input << endl;

}