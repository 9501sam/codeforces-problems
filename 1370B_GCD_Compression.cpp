// https://codeforces.com/problemset/problem/1370/B
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, tmp;
        cin >> n;
        vector<int> odd;
        vector<int> even;
        for (int i = 1; i <= 2 * n; i++) {
            cin >> tmp;
            if (tmp % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        vector<pii> ans;
        for (int i = 0; i+1 < odd.size(); i += 2)
            ans.push_back({odd[i], odd[i+1]});
        for (int i = 0; i+1 < even.size(); i += 2)
            ans.push_back({even[i], even[i+1]});
        for (int i = 0; i < n-1; i++)
            cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}
