#include<iostream>

int solve(int t) 
{
    int cnt = 0;
    while(t>0)  
    {   
        t /= 10;
        cnt ++ ;
    }
    return cnt;
}

int main () 
{
    int t;
    std::cin>>t;
    int digits =solve(t);
    if(digits == 1) 
    {
        std::cout<<"1\n";
    }
    else if(digits == 2) 
    {
        std::cout<<"2\n";
    }
    else if(digits == 3) 
    {

        std::cout<<"3\n";
    }
    else 
    {
        std::cout<<"More than 3 digits"<<std::endl;;
    }
    return 0;
}
