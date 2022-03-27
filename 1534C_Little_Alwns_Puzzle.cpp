// https://codeforces.com/problemset/problem/1534/C
#include <iostream>
using namespace std;

#define MOD (ll)(1e9 + 7)

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2][n+1];
        int map[n+1];
        bool visited[n+1] = {}; // num
        for (int i = 1; i <= n; i++)
            cin >> a[0][i];
        for (int i = 1; i <= n; i++)
            cin >> a[1][i];

        for (int i = 1; i <= n; i++) {
            int start = a[0][i];
            int dest = a[1][i];
            map[start] = dest;
        }

        ll res = 1;
        int i = 1;
        while (i <= n) {
            visited[i] = true;


            ll cirSize = 1;
            int start = i;
            while (map[i] != start) {
                i = map[i];
                visited[i] = true;
                cirSize++;
            } 
            res = (res * 2) % MOD;

            i = start;
            while ((i <= n) && visited[i])
                i++;
        }

        cout << res << endl;
    }
}

