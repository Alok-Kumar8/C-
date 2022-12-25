#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n];
        int s[n];
        int count = 0;
        for(int i=0;i<n;i++){
            cin >> p[i] >> s[i];
        }
        for(int i = 1; i <= 8; i++){
            int maxScore = 0;
            for(int j = 0; j < n; j++){
                if(i==p[j] && s[j]>maxScore){
                    maxScore = s[j];
                }
            }
            count+=maxScore;
        }
        cout << count << endl;
    }
	return 0;
}
