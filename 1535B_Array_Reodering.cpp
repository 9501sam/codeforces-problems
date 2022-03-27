// https://codeforces.com/problemset/problem/1535/B
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, b % a);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, odd = 0, even = 0, tmp;
        vector<int> odds;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp % 2 == 0) even++; 
            else {
                odd++;
                odds.push_back(tmp);
            }
        }
        int ans = 0;
        ans += even * (even - 1) / 2;
        ans += even * odd;
        for (int i = 0; i < odd; i++)
            for (int j = i + 1; j < odd; j++)
                if (__gcd(odds[i], 2 * odds[j]) > 1) ans++;
        cout << ans << endl;
    }
}
