// https://codeforces.com/gym/103428/problem/A
#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n + 5] = {};
    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        a[u]++;
        a[v]++;
    }
    int three = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 3) three++;
        else if (a[i] > 3) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << (n - three) << endl;
}

