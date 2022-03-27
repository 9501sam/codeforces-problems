// https://codeforces.com/contest/1586/problem/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b, c, root;
        bool flag[n+1];
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            flag[b] = true;
        }
        for (int i = 1; i <= n; i++)
            if (!flag[i]) {
                root = i;
                break;
            }
        for (int i = 1; i <= n; i++)
            if (i != root) 
                cout << root << " " << i << endl;
    }
    return 0;
}
