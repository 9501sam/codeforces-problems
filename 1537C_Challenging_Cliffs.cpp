// https://codeforces.com/problemset/problem/1537/C
#include <iostream>
#include <algorithm>
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
        sort(a, a+n);
        int minDiff = a[n-1] - a[0] + 3;
        int I;
        
        for (int i = 1; i < n; i++) {
            int diff = a[i] - a[i-1];
            if (diff < minDiff) {
                I = i;
                minDiff = diff;
            }
        }

        cout << a[I-1] << " ";
        for (int i = I + 1; i < n; i++)
            cout << a[i] << " ";
        for (int i = 0; i < I-1; i++)
            cout << a[i] << " ";
        cout << a[I];
        cout << endl;
    }
}
