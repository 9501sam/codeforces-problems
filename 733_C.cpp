// https://codeforces.com/contest/1530/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sumA = 0, sumB = 0, a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n, greater<int>());
        sort(b, b + n, greater<int>());

        ll num_del = n / 4;
        for (int i = 0; i < n; i++)
            sumA += a[i];
        for (int i = 0; i < n; i++)
            sumB += b[i];

        ll endA = n - 1 - num_del;
        ll result = 0;
        while (sumA <= sumB) {
            sumA += 100;
            n++;
            if (n % 4 == 0)
                sumA -= a[endA--];
            result++;
        }
        cout << result << endl;
    }
    return 0;
}
