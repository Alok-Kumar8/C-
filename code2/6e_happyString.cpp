#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        int count = 0;
        for(int i = 0; i < len; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
                if(count >2){
                    break;
                }
            }
            else{
                count= 0;
            }
        }
        if(count>2){
            cout <<"Happy" << endl;
        }
        else{
            cout<<"Sad"<< endl;
        }
    }
	return 0;
}
