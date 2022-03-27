// https://codeforces.com/contest/1549/problem/B
#include <iostream>
using namespace std;

static int count;
static int Max;

void search(int depth, int n, int gNum, int gPos[], bool gAtGoal[], string e)
{
    if (count > Max)
        Max = count;

    if (depth == gNum)
        return;

    // put gPos[depth] to goal
    int pawn = gPos[depth];
    if (pawn-1 > 0 && e[pawn-1] == '1' && gAtGoal[pawn-1] == false) { 
        if (count + gNum - depth > Max) { // valuable
            gAtGoal[pawn-1] = true;
            count++;
            search(depth+1, n, gNum, gPos, gAtGoal, e);
            gAtGoal[pawn-1] = false;
            count--;
        }
    }

    if (pawn+1 < n && e[pawn+1] == '1' && gAtGoal[pawn+1] == false) { 
        if (count + gNum - depth > Max) { // valuable
            gAtGoal[pawn+1] = true;
            count++;
            search(depth+1, n, gNum, gPos, gAtGoal, e);
            gAtGoal[pawn+1] = false;
            count--;
        }
    }

    // do not put pawn to goal
    if (count + gNum - depth - 1 > Max) {
        search(depth+1, n, gNum, gPos, gAtGoal, e);
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string e, g;
        cin >> n;
        cin >> e >> g;
        int gPos[n], cnt = 0, index = 0;
        for (int i = 0; i < n; i++)
            gPos[i] = -1;
        for (int i = 0; i < n; i++) {
            if (g[i] == '1')
                if (e[i] == '0')
                    cnt++;
                else
                    gPos[index++] = i;
        }

        bool gAtGoal[n];
        for (int i = 0; i < n; i++)
            gAtGoal[i] = false;
        count = 0;
        Max = 0;
        search(0, n, index, gPos, gAtGoal, e);
        cnt += Max;
        cout << cnt << endl;
    }
}

