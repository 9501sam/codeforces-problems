// https://codeforces.com/contest/1557/problem/0
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], max;
        long long sum = 0; // long long !!!!
        for (int i = 0; i < n; i++)
            cin >> a[i];
        max = a[0];
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (a[i] > max)
                max = a[i];
        }
        sum -= max;
        printf("%.15f\n", (double)sum / (n-1) + (double)max);
    }
}
