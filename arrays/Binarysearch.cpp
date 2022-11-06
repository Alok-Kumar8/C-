#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int val)
{
    int start = 0;                                       // performing binary operation
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (val == arr[mid])
        {
            return mid;
        }
        else if (val > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int input[15];
    int n;                                  // Taking input from the user
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int x;
    cin >> x;
    cout << binarysearch(input, n, x) << endl;             //function calling
}
