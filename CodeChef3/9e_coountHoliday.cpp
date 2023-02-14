#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        if(k%7==0 || k%7==6)
	        count++;
	    }
	    cout<<(8-count)+n<<endl;
	}
	return 0;
}
