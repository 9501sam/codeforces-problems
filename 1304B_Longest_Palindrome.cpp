// https://codeforces.com/problemset/problem/1304/B
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int n, m;
    cin >> n >> m;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mid = -1;
    vector<pii> p;
    bool used[n] = {};

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++) {
            if (used[j] || used[i]) continue;
            int k;
            for (k = 0; k < m; k++)
                if (a[i][k] != a[j][m-1-k]) break;
            if (k == m && !used[j] && !used[i]) {
                p.push_back({i, j});
                used[i] = true;
                used[j] = true;
            }
        }

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        int l = 0, r = m-1;
        while (l <= r) {
            if (a[i][l] != a[i][r])
                break;
            l++;
            r--;
        }
        if (!(l <= r)) {
            mid = i;
            break;
        }
    }

    cout << m * (p.size() * 2 + (mid != -1)) << endl;
    for (int i = 0; i < p.size(); i++)
        cout << a[p[i].first];
    if (mid != -1)
        cout << a[mid];
    for (int i = p.size()-1; i >= 0; i--)
        cout << a[p[i].second];
    cout << endl;
}
