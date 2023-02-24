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
	    int sum1=0,sum2=0;
	    for(i=1;i<=10;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=2;i<=10;i=i+2)
	    {
	        sum2=sum2+arr[i];
	    }
	    for(i=1;i<10;i=i+2)
	    {
	        sum1=sum1+arr[i];
	    }
	    if(sum1>sum2)
	    {
	        cout<<"1"<<endl;
	    }
	  else  if(sum2>sum1)
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
