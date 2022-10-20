#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here.
    int basic_salary=0;
char allowance;
int d=0;
cin>>basic_salary>>allowance;
float hra=0.2*basic_salary;
float da=0.5*basic_salary;
float pf=0.11*basic_salary;
    if(allowance=='A'){
         d=1700;
    }else if(allowance=='B'){
        d=1500;
        
    }else{
        d=1300;
    }
float total_salary=basic_salary+hra+da+d-pf;
int roundsalary=round(total_salary);
    cout<<roundsalary<<endl;

    return 0;
}