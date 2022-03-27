// https://codeforces.com/contest/1593/problem/C
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k, ans, index;
        cin >> n >> k;
        int mice[k];
        for (int i = 0; i < k; i++) {
            cin >> mice[i];
            mice[i] = n - mice[i];
        }
        sort(mice, mice+k);

        ans = 0; index = 0;
        while (n >= 0 && index < k) {
            if ((n -= mice[index++]) > 0)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}

