// https://codeforces.com/contest/1555/problem/D
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char str[n];
    cin >> str;

    const char *s[6] = {"abc", "acb", "bac", "bca", "cab", "cba"};
    
    int count[6][n+1] = {{}};
    for (int j = 1; j <= n; j++)
        for (int i = 0; i < 6; i++)
            if (str[j-1] != *(s[i] + j % 3))
                count[i][j] = count[i][j-1] + 1;
            else
                count[i][j] = count[i][j-1];

    while (m--) {
        int l, r, ans;
        cin >> l >> r;
        ans = count[0][r] - count[0][l-1];
        for (int i = 1; i < 6; i++)
            ans = min(ans, count[i][r] - count[i][l-1]);
        cout << ans << endl;
    }
}
