// https://codeforces.com/problemset/problem/1469/B
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, a[105], b[105];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> m;
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int sumA = 0, sumB = 0, maxA = 0, maxB = 0;

        for (int i = 0; i < n; i++) {
            sumA += a[i];
            maxA = max(maxA, sumA);
        }

        for (int i = 0; i < m; i++) {
            sumB += b[i];
            maxB = max(maxB, sumB);
        }


        cout << maxA + maxB << endl;
    }
    return 0;
}
