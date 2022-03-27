// https://codeforces.com/contest/1555/problem/A
#include <iostream>
using namespace std;

#define LL long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n, sum = 0;
        int unit;
        cin >> n;
        if (n < 6)
            sum = 15;
        else
            sum = ((n+1) / 2) * 5;
        cout << sum << endl;
    }
}
