// https://codeforces.com/problemset/problem/1504/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        int one[n] = {};
        int zero[n] = {};
        one[0] = (s[0] == '1');
        zero[0] = (s[0] == '0');
        for (int i = 1; i < n; i++) {
            one[i] = one[i-1] + (s[0] == '1');
            zero[i] = zero[i-1] + (s[0] == '0');
        }

        bool f = (s[0] == t[0]);
        for (int i = 0; i < n; i++) {
            if (one[i] != zero[i]) {
                if ((s[i] == t[i]) != f)
                    break;
            } else {
            }
        }
    }
}
