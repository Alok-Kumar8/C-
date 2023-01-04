#include <bits/stdc++.h>
using namespace std;

int main() {
        float b, ls;
        cin >> b >> ls;
        float maxL = ls*ls + b*b;
        float minL = ls*ls - b*b;
        cout << sqrt(maxL) << endl;
        cout << sqrt(minL) << endl; 
}
