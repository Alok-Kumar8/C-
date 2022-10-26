#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }
        int k = i;
        int j = 1;
        while (j <= i)
        {
            cout << k;
            j++;
            k--;
        }
        int l = i - 1;
        int m = 1;
        while (m <= i)
        {
            cout << l;
            l++;
            m++;
        }

        cout << endl;
        i++;
    }
}