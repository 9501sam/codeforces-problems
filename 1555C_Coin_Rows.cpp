// https://codeforces.com/contest/1555/problem/C
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        int a[2][m];

        for (int i = 0; i < m; i++)
            cin >> a[0][i];
        for (int i = 0; i < m; i++)
            cin >> a[1][i];
        
        int downIndexA, scoreMin, score0, score1;
        downIndexA = 0;
        score1 = 0;
        score0 = 0;
        for (int i = 1; i < m; i++)
            score0 += a[0][i];
        scoreMin = max(score0, score1);

        for (downIndexA = 1; downIndexA < m; downIndexA++) {
            score0 -= a[0][downIndexA];
            score1 += a[1][downIndexA-1];
            scoreMin = min(scoreMin, max(score0, score1));
        }

        cout << scoreMin << endl;
    }
}
