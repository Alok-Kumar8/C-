#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int find;
    // cout << "enter the number to be found :" << endl;
    // cin >> find;
    int new_a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> new_a[i];
    }
    cout << "enter the number to be found :" << endl;
    cin >> find;
    for (int j = 0; j < n; j++)
    {
        if (new_a[j] == find)
        {
            cout << j << endl;
            break;
        }
        // else{
        //     cout<< -1 << endl;
        // }
    }
}          