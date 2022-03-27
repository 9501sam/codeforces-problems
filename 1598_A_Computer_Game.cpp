// https://codeforces.com/contest/1598/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        char a[2][n];
        for (int i = 0; i < n; i++)
            cin >> a[0][i];
        cin.ignore();
        for (int i = 0; i < n; i++)
            cin >> a[1][i];

        int index;
        for (index = 0; index < n; index++)
            if (a[0][index] == '1' && a[1][index] == '1')
                break;
        if (index < n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
