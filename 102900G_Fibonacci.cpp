// https://codeforces.com/gym/102900/problem/G
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll n, odd, even, ans;
    cin >> n;
    even = (n / 3);
    odd = 2 * (n / 3) + n % 3;
    
    ans = odd * even + (even * (even - 1)) / 2;
    cout << ans << endl;
}
