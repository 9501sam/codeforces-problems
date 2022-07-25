// https://codeforces.com/problemset/problem/1703/C
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int ans[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++) {
            int bi;
            string s;
            cin >> bi >> s;

            int U = 0;
            for (int j = 0; j < bi; j++) { // iter s
                if (s[j] == 'U')
                    U++;
                else
                    U--;
            }
            ans[i] = (a[i] + 10 - U) % 10;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
