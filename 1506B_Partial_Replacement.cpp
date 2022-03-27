// https://codeforces.com/problemset/problem/1506/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int i = s.find_first_of('*');
    int result = 0;
    while (i < n) {
        result++;
        int j = min(n - 1, i + k); // j is next i
        for (; j > i; j--)
            if (s[j] == '*')
                break;
        if (i == j)
            break;
        i = j;
    }
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
