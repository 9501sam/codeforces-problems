// https://codeforces.com/problemset/problem/1705/B
#include <iostream>
using namespace std;

typedef long long ll;

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
        ll sum = 0, num_zero = 0, num_zeros_from_start = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += a[i];
            if (a[i] == 0)
                num_zero++;
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 0)
                num_zeros_from_start++;
            else
                break;
        }

        cout << num_zero + sum - num_zeros_from_start << endl;
    }
    return 0;
}
