#include <bits/stdc++.h>
using namespace std;

int lastIndex(int a[], int n, int target)
{
    if (n == 0)
    {
        return -1;
    }
    int index = lastIndex(a + 1, n - 1, target);

    if (index == -1)
    {
        if (a[0] == target)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else{
        return index +1;
    }
}

int main()
{
    int arr[5] = {2, 3, 5, 2, 6};
    int ans = lastIndex(arr, 5, 6);
    cout << ans << endl;
}