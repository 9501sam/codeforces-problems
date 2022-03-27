// https://codeforces.com/problemset/problem/1584/B
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, res1 = 0;
        cin >> n >> m;

        res1 += (n / 3) * m;
        n = n % 3;
        res1 += (m / 3) * n;
        m = m % 3;

        if (n == 1 &&  m == 1)
            res1++;
        else if (n == 2 && m == 2)
            res1 += 2;
        else if ((n == 1 && m == 2) || (n == 2 && m == 1))
            res1 += 1;

        cout << res1 << endl;
    }
}
