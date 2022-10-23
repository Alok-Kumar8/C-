#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    int h = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << h;
            j += 1;
            h += 1;
        }
        cout << endl;
        i += 1;
    }
}