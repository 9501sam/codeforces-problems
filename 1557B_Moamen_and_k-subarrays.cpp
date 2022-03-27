// https://codeforces.com/contest/1557/problem/B
#include <iostream>
#include <algorithm>
using namespace std;

#define INDEX(n) ((n) + (int)(1e9))

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k, numPart;
        cin >> n >> k;
        int a[n]; // , pos[2*(int)(1e9)+1];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // sort(a, a+n);
        // for (int i = 0; i < n; i++)
        //     pos[INDEX(a[i])] = i;

        // numPart = 1;
        // for (int i = 1; i < n; i++)
        //     if (pos[INDEX(a[i])] != pos[INDEX(a[i-1])] + 1)
        //         numPart++;

        // if (numPart <= k)
        //     cout << "Yes" << endl;
        // else
        //     cout << "No" << endl;

    }
}
