// https://codeforces.com/contest/1582/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n-1, ch = 'a', min = 2 * n, ans;
        for (ch = 'a'; ch <= 'z'; ch++) {
            int cnt = 0;
            l = 0;
            r = n-1;
            while (l < r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else if (s[l] == ch) {
                    cnt++;
                    l++;
                } else if(s[r] == ch) {
                    cnt++;
                    r--;
                } else {
                    break;
                }
            }
            
            if (l >= r && cnt < min)
                min = cnt;
        }

        if (min != 2 * n)
            cout << min << endl;
        else
            cout << "-1" << endl;
    }
}
