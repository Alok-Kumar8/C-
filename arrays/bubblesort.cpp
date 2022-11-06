#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printarray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int input[30];
    for (int j = 0; j < n; j++)
    {
        cin >> input[j];
    }
    bubblesort(input, n);
    printarray(input, n);
}