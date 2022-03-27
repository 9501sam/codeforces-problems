// https://codeforces.com/contest/1593/problem/A
#include <iostream>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, max, num_max;
        cin >> a >> b >> c;
        max = (a > b) ? a : b;
        max = (max > c) ? max : c;
        num_max = (a == max) + (b == max) + (c == max);

        if (num_max == 1) {
            cout << ((a == max) ? (0) : (max - a + 1)) << " ";
            cout << ((b == max) ? (0) : (max - b + 1)) << " ";
            cout << ((c == max) ? (0) : (max - c + 1)) << endl;
        } else {
            cout << (max - a + 1) << " " << (max - b + 1) << " " << (max - c + 1) << endl;
        }
    }
    return 0;
}
