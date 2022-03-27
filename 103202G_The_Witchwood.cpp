// https://codeforces.com/gym/103202/problem/G
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n, greater<ll>());

    ll sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];

    cout << sum << endl;
}
