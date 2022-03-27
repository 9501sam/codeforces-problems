// https://codeforces.com/contest/1552/problem/B
#include <iostream>
using namespace std;

#define LL long long
#define NUM_RACE 5

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int r[n][NUM_RACE];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < NUM_RACE; j++)
                cin >> r[i][j];

        int w = 0;
        for (int i = 1; i < n; i++) {
            int i_win = 0;
            for (int j = 0; j < NUM_RACE; j++)
                if (r[i][j] < r[w][j])
                    i_win++;
            if (i_win >= 3)
                w = i;
        }

        // check if w is superior to all other athelete
        int ans = w+1;
        for (int i = 0; i < n; i++) {
            if(i == w)
                continue;

            int i_win = 0;
            for (int j = 0; j < NUM_RACE; j++)
                if (r[i][j] < r[w][j])
                    i_win++;
            if (i_win >= 3) {
                ans = -1;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
