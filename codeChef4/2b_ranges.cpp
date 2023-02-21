#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   set<int>set;
	   int a,b,c,d,k=0;
	   cin>>a>>b>>c>>d;
	   
	   for(int i=a;i<=b;i++)set.insert(i);
	   for(int i=c;i<=d;i++)set.insert(i);
	   
	   for(int i:set)k++;
	   cout<<k<<endl;
	}
	
	return 0;
}
