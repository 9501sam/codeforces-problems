// https://codeforces.com/problemset/problem/1698/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int allx = 0;
        for (int i = 0; i < n; i++)
            allx = allx ^ a[i];
        
        int ans;
        for (int i = 0; i < n; i++) {
            ans = a[i];
            if (ans == ans ^ allx)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
