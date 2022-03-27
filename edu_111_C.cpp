// https://codeforces.com/contest/1550/problem/C
#include <iostream>
using namespace std;

bool is_good(long long a, long long b, long long c)
{
    return (b - a) * (b - c) > 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        count += 2 * n - 1;
        for (int i = 0; i < n-2; i++)
            if (is_good(a[i], a[i+1], a[i+2])) 
                count++;

        for (int i = 0; i < n-3; i++)
            if (is_good(a[i], a[i+1], a[i+2]) && is_good(a[i+1], a[i+2], a[i+3]) &&
                        is_good(a[i], a[i+1], a[i+3]) && is_good(a[i], a[i+2], a[i+3]))
                count++;

        cout << count << endl;
    }

    return 0;
}
