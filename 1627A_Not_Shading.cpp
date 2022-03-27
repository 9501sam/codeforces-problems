#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        char arr[n + 1][m + 1], tmp;
        bool has_b = false;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == 'B') has_b = true;
            }
        }

        if (!has_b) {
            cout << -1 << endl;
            continue;
        } else if (arr[r][c] == 'B') {
            cout << 0 << endl;
            continue;
        }
        

        bool one = false;
        for (int i = 1; i <= n; i++) 
            if (arr[i][c] == 'B') one = true;
        for (int j = 1; j <= m; j++) 
            if (arr[r][j] == 'B') one = true;
        if (one) {
            cout << 1 << endl;
            continue;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
