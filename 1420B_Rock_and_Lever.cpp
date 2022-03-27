// https://codeforces.com/problemset/problem/1420/B
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num;

        int cnt[34] = {};
        for (int i = 0; i < n; i++) {
            cin >> num;

            int sh;
            for (sh = 31; sh >= 0; sh--)
                if (num & (1 << sh)) break;
            cnt[sh]++;
        }

        ll res = 0;
        for (int i = 0; i < 32; i++)
            if (cnt[i] >= 2)
                res += ((ll)cnt[i] * ((ll)cnt[i]-1)) / 2;
        cout << res << endl;
    }
}
