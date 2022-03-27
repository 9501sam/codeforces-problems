// https://codeforces.com/problemset/problem/1472/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> dp(n);
        for (int i = n-1; i >= 0; i--) {
            dp[i] = a[i];
            int j = i + a[i];
            if (j < n)
                dp[i] += dp[j];
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}
