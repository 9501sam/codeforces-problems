// https://codeforces.com/contest/1553/problem/A
#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << (n + 1) / 10 << endl;
    }
    return 0;
}
