// https://codeforces.com/problemset/problem/1566/D1
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

bool cmp(pii a, pii b)
{
    return a.second <= b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        pii a[n*m];
        for (int i = 0; i < n*m; i++) {
            a[i].first = i;
            cin >> a[i].second;
        }
        sort(a, a+n*m, cmp);
    }
}

