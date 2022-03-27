// https://codeforces.com/contest/1530/problem/A
#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, max = 0;
        cin >> n;

        while (n) {
            if (n % 10 > max)
                max = n % 10;
            n = n / 10;
        }

        cout << max << endl;
    }

    return 0;
}
