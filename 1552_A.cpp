// https://codeforces.com/contest/1552/problem/0
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        t = s;
        sort(t.begin(), t.end());

        int i, len = s.size(), k = 0;
        for (i = 0; i < len; i++)
            if (s[i] != t[i])
                k++;
        cout << k << endl;
    }

    return 0;
}
