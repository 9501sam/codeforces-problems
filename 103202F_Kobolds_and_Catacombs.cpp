// https://codeforces.com/gym/103202/problem/F
#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int m[n];
    int M[n];
    int tmp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    tmp = a[0];
    M[0] = tmp;
    for (int i = 1; i < n; i++) {
        tmp = max(tmp, a[i]);
        M[i] = tmp;
    }

    tmp = a[n-1];
    m[n-1] = tmp;
    for (int i = n-1; i >= 0; i--) {
        tmp = min(tmp, a[i]);
        m[i] = tmp;
    }

    int cnt = 0;
    for (int i = 0; i < n-1; i++)
        if (M[i] <= m[i+1]) cnt++;
    cnt++;

    cout << cnt << endl;
}
