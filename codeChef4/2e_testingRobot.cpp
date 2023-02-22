#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n>>x;
    
        string c;
        cin>>c;
    
        unordered_set<int> s1;
        s1.insert(x);
        for(int i=0; i<n; i++)
        {
            if(c[i]=='R')
            {
                x++;
                s1.insert(x);
            }
            if(c[i]=='L')
            {
                x--;
                s1.insert(x);
            }
        }
        cout<<(s1.size())<<endl;
        
    }
}