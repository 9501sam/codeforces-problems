// https://codeforces.com/problemset/problem/1579/B?f0a28=2
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

#define SWAP(i, j) \
    do { \
        int tmp = a[i]; \
        a[i] = a[j]; \
        a[j] = tmp; \
    } while (0);

int main()
{
    int t;
    cin >> t;
    while (t--) {
        vector<pii> action;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l, r;
        for (int i = 1; i < n; i++) {
            r = i;
            l = i-1;
            while (l >= 0 && a[l] > a[l+1]) {
                SWAP(l, l+1);
                l--;
            }
            if (l+1 != r)
                action.push_back({l+1, r});
        }

        cout << action.size() << endl;
        for (int i = 0; i < action.size(); i++)
            cout << action[i].first + 1 << " " << action[i].second + 1 << " "
                << action[i].second - action[i].first << endl;

    }

    return 0;
}
