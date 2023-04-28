#include <bits/stdc++.h>
#include "myMap.cpp"
using namespace std;


int main(){
    myMap<int> map;
    for(int i = 0; i < 10; i++){
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        int value = i + 1;
        map.insert(key, value);
        cout << map.getLoadFactor() << endl;
    }
    cout << map.size() << endl;
    map.remove("abc3");
    map.remove("abc8");
    
    for(int i = 0; i < 10; i++){
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        cout << key << ":" << map.getValue(key) << endl; 

    }
    cout << map.size() << endl;
}