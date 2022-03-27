// https://codeforces.com/contest/1600/problem/J
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define N (int)1e3
#define M (int)1e3

int a[N * M] = {0};
bool f[N * M];
int n, m;
int sum;

void walk(int index)
{
    if (f[index])
        return;
    sum++;
    f[index] = true;

    if (!(a[index] & 4) && !f[index+1]) // EAST
        walk(index + 1);

    if (!(a[index] & 2) && !f[index+m]) // SOUTH
        walk(index + m);

    if (!(a[index] & 8) && !f[index-m]) // NORTH
        walk(index - m);

    if (!(a[index] & 1) && !f[index-1]) // WEST
        walk(index - 1);
}

int count(int index)
{
    sum = 0;

    sum++;
    f[index] = true;

    if (!(a[index] & 4) && !f[index+1]) // EAST
        walk(index + 1);

    if (!(a[index] & 2) && !f[index+m]) // SOUTH
        walk(index + m);

    return sum;
}

int main()
{
    int index;

    cin >> n >> m;
    for (int i = 0; i < n*m; i++)
        f[i] = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i * m + j];

    vector<int> areas;
    index = 0; // (0, 0)
    // cout << count(0) << endl;

    while (index < n * m) {
        areas.push_back(count(index));

        // find start point
        while (index < n * m && f[index])
            index++;
    }

    sort(areas.begin(), areas.end(), greater <>());

    for (int i = 0; i < areas.size(); i++)
        cout << areas[i] << " ";
    cout << endl;

    return 0;
}

