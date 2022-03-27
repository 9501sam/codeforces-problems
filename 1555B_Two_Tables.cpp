// https://codeforces.com/contest/1555/problem/B
#include <iostream>
using namespace std;

#define INF (1e9)

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int W, H, x1, y1, x2, y2, w1, h1, w2, h2, ans;
        cin >> W >> H;
        cin >> x1 >> y1 >> x2 >> y2;
        w1 = x2 - x1;
        h1 = y2 - y1;
        cin >> w2 >> h2;

        ans = INF;
        if (w1 + w2 <= W) {
            ans = min(ans, max(0, w2-x1)); // left
            ans = min(ans, max(0, w2-(W-x2))); // right
        }

        if (h1 + h2 <= H) {
            ans = min(ans, max(0, h2-(H-y2))); // top
            ans = min(ans, max(0, h2-y1)); // down
        }

        if (ans == INF)
            cout << "-1" << endl;
        else
            cout << ans << endl;
    }
}

