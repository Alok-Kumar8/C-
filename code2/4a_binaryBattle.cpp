#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, a, b;
        cin >> n >> a >> b;
        int r = log2(n);
        cout << (r * a) + ((r - 1)*b) << endl;
	return 0;
}