// https://codeforces.com/problemset/problem/1471/B
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<pii> a(n);
        for (int i = 0; i < n; i++) {
            a[i].first = 1;
            cin >> a[i].second;
        }
        int i = 0;
        ll sum = 0;
        while (a[i].second % x == 0) {
            a.push_back({x * a[i].first, a[i].second / x});
            i++;
        }
        for (int i = 0; i < a.size(); i++)
            sum += a[i].first * a[i].second;

        cout << sum << endl;
    }
}

