#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> myMap;
    myMap["abc"] = 1;
    myMap["abc1"] = 2;
    myMap["abc2"] = 3;
    myMap["abc3"] = 4;
    myMap["abc4"] = 5;
    myMap["abc5"] = 6;
    myMap["abc6"] = 7;

    // find uses iterator
    unordered_map<string,int> :: iterator it1 = myMap.find("abc3");
    myMap.erase(it1);                             // Erase can also take start to end value

    unordered_map<string, int>:: iterator it = myMap.begin();
    while(it != myMap.end()){
        cout << "Key: " << it->first << "  " << "Value: " << it->second << endl;
        it++;
    }
}

