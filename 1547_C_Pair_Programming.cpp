// https://codeforces.com/problemset/problem/1547/C
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        int a[n], b[m], ia, ib;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        vector<int> ans;
        ia = 0; ib = 0;
        bool exist = true;
        while (ia < n || ib < m) {
            if (ia < n && a[ia] == 0) {
                ans.push_back(a[ia++]);
                k++;
            } else if (ib < m && b[ib] == 0) {
                ans.push_back(b[ib++]);
                k++;
            } else if (ia < n && a[ia] <= k) {
                ans.push_back(a[ia++]);
            } else if (ib < m && b[ib] <= k){
                ans.push_back(b[ib++]);
            } else {
                exist = false;
                break;
            }
        }

        if (exist) {
            for (int i = 0; i < n+m; i++)
                cout << ans[i] << " ";
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
