// https://codeforces.com/problemset/problem/1705/A
#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b)
{
    return a < b;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
       int n, x; 
       cin >> n >> x;
       int a[2 * n];
       for (int i = 0; i < 2 * n; i++)
           cin >> a[i];
       sort(a, a + 2 * n, cmp);
       int i;
       for (i = 0; i < n; i++)
           if (a[i + n] < a[i] + x)
               break;

       if (i != n)
           cout << "NO" << endl;
       else
           cout << "YES" << endl;
    }
    return 0;
}
