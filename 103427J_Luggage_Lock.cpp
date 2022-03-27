// https://codeforces.com/gym/103427/problem/J
#include <iostream>
#include <queue>
using namespace std;

#define MIN(n, m) ((n < m) ? n : m)

int table[10][10][10][10];
int v[10][4] = {
    {1, 0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1},
    {1, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 1, 1},
    {1, 1, 1, 0},
    {0, 1, 1, 1},
    {1, 1, 1, 1},
};

typedef struct {
    int x1;
    int x2;
    int x3;
    int x4;
    int depth;
} state;

void bfs()
{
    queue<state> q;
    state s;
    s.x1 = 0;
    s.x2 = 0;
    s.x3 = 0;
    s.x4 = 0;
    s.depth = 0;
    q.push(s);
    while (q.size() > 0) {
        state s = q.front();
        q.pop();
        for (int i = 0; i < 10; i++) {
            state t;
            t.x1 = (s.x1 + v[i][0]) % 10;
            t.x2 = (s.x2 + v[i][1]) % 10;
            t.x3 = (s.x3 + v[i][2]) % 10;
            t.x4 = (s.x4 + v[i][3]) % 10;
            t.depth = s.depth + 1;
            if (table[t.x1][t.x2][t.x3][t.x4] == -1) {
                table[t.x1][t.x2][t.x3][t.x4] = t.depth;
                q.push(t);
            }
        } 
        for (int i = 0; i < 10; i++) {
            state t;
            t.x1 = (10 + s.x1 - v[i][0]) % 10;
            t.x2 = (10 + s.x2 - v[i][1]) % 10;
            t.x3 = (10 + s.x3 - v[i][2]) % 10;
            t.x4 = (10 + s.x4 - v[i][3]) % 10;
            t.depth = s.depth + 1;
            if (table[t.x1][t.x2][t.x3][t.x4] == -1) {
                table[t.x1][t.x2][t.x3][t.x4] = t.depth;
                q.push(t);
            }
        } 
    }
}

int main()
{
    int *p = &table[0][0][0][0];
    for (int i = 0; i < 10000; i++)
        *p++ = -1;
    table[0][0][0][0] = 0;
    bfs();

    int t;
    cin >> t;
    while (t--) {
        int a, b, a1, a2, a3, a4, b1, b2, b3, b4;
        int x1, x2, x3, x4;
        cin >> a >> b;
        a1 = (a / 1000) % 10;
        a2 = (a / 100) % 10;
        a3 = (a / 10) % 10;
        a4 = (a / 1) % 10;

        b1 = (b / 1000) % 10;
        b2 = (b / 100) % 10;
        b3 = (b / 10) % 10;
        b4 = (b / 1) % 10;

        x1 = ((10 + b1) - a1) % 10;
        x2 = ((10 + b2) - a2) % 10;
        x3 = ((10 + b3) - a3) % 10;
        x4 = ((10 + b4) - a4) % 10;

        int res = table[x1][x2][x3][x4];
        cout << res << endl;
    }
}
