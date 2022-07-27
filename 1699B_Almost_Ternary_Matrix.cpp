// https://codeforces.com/problemset/problem/1699/B
#include <iostream>
using namespace std;

int size = 50;

int main()
{
    int b[4][4] = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {1, 0, 0, 1},
    };
    int a[size][size] = {};
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            a[i][j] = b[i % 4][j % 4];
        }

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        // cout << endl;
    }
    return 0;
}
