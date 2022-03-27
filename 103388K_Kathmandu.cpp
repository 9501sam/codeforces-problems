// https://codeforces.com/gym/103388/problem/K
#include <iostream>
using namespace std;

int main()
{
    int t, d, m;
    cin >> t >> d >> m;
    int a[m + 3];
    a[0] = 0;
    a[m+1] = d;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1; i <= m+1; i++)
        if ((a[i] - a[i-1]) >= t) {
            cout << "Y" << endl;
            return 0;
        }
    cout << "N" << endl;
}
