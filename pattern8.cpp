#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    while (i <= 5)
    {
        int j = 5;
        while (j >= 1)
        {
            cout <<j;
            j -= 1;
        }
        cout << endl;
        i += 1;
    }
}