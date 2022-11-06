#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sortarray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], minindex = i;            // finding the minimum of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minindex = j;
            }
        }
        int temp = arr[i];                        // swapping the element
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}
int main()
{
    int input[] = {2, 5, 1, 6, 34, 23};
    sortarray(input, 6);                           // funtion calling
    for (int i = 0; i < 6; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}