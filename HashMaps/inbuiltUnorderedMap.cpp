#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string, int> myMap;

    //insert element method 1
    pair<string, int> p("abc", 1);
    myMap.insert(p);

    //Method 2
    myMap["def"] = 2;


    // Access element
    cout << myMap.at("abc") << endl;
    cout << myMap["def"] << endl;
    cout << "Size : " << myMap.size() << endl;

    // Check if Ket is present 
    if(myMap.count("abc") > 0){
        cout << "abc is present" << endl;
    }

    // Erase key

    myMap.erase("def");
    if(myMap.count("def") > 0){
        cout << "def is present" << endl;
    }
    else{
        cout << "def is not present" << endl;
    }

    cout << "Size : " << myMap.size() << endl;


}
