// https://codeforces.com/problemset/problem/1492/B
#include <iostream>
#include <vector>
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

        bool checked[n+1] = {};
        int max = n;
        int i = n-1;
        int r = n;
        int l = n-1;
        while (i >= 0) { // one seg
            while (a[l] != max) {
                checked[a[l]] = true;
                l--;
            }
        }

    }
}
