#include <bits/stdc++.h>
using namespace std;

bool balanced(string s){
    stack<char> p;
    int len = s.size();
    for(int i = 0; i<len; i++){
        if(p.empty()){
            p.push(s[i]);
        }
        else if((p.top()=='(' && s[i]==')')
        || (p.top()=='{' && s[i]=='}')
        || (p.top()=='[' && s[i]==']')){
            p.pop();
        }
        else{
            p.push(s[i]);
        }
    }
    if(s.empty()){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    stack<int> p;
    string s = "{[()]}";
    if(balanced(s)){
        cout << "Balanced" << endl;
    }
    else{
        cout << "Not Balanced" << endl;
    }
   
}