// https://codeforces.com/problemset/problem/1604/A
#include <iostream>
using namespace std;

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int max = 0;
        for (int i = 1; i <= n; i++) {
            int tmp = MAX(0, a[i] - i);
            max = MAX(tmp, max);
        }

        cout << max << endl;
    }
}
