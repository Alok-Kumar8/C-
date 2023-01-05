#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count1, count0;
        count1 = 0;
        count0 = 0;
        int w[7];
        for (int i = 0; i < 7; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < 7; i++)
        {
            if (w[i] == 1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        if (count1 > count0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
