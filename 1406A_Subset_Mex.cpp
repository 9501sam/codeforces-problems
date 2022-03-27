// https://codeforces.com/problemset/problem/1406/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, cnt[105] = {}, tmp;
        cin >> n;
        while (n--) {
            cin >> tmp;
            cnt[tmp]++;
        }
        int i, mexa, mexb;

        i = 0;
        while (cnt[i] >= 1)
            i++;
        mexa = i;

        i = 0;
        while (cnt[i] >= 2)
            i++;
        mexb = i;

        cout << (mexa + mexb) << endl;
    }
}
