#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[11];
	    int i;
	    int s1=0,s2=0;
	    for(i=1;i<=10;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=2;i<=10;i=i+2)
	    {
	        s2+=arr[i];
	    }
	    for(i=1;i<10;i=i+2)
	    {
	        s1+=arr[i];
	    }
	    if(s1>s2)
	    {
	        cout<<"1"<<endl;
	    }
	  else  if(s2>s1)
	    {
	        cout<<"2"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	        
	}
	return 0;
}
