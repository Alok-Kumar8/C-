#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40); 

    int s = v.size();

    for(int i = 0; i < s; i++){
        cout << v[i] << " ";
    } 
    cout << endl;

    v[0] = 100;
    v[2] = 200;

    for(int i = 0; i < s; i++){
        cout << v[i] << " ";
    } 
    cout << endl;

    cout << "Element at pos. 2 is : " << v.at(2) << endl;

}