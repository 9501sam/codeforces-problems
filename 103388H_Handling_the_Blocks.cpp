// https://codeforces.com/gym/103388/problem/H
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pii;

bool cmp(pii a, pii b)
{
    return a.first < b.first;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int color[n];
    vector<pii> a;

    for (int i = 0; i < n; i++) {
        int num, c;
        cin >> num >> c;
        color[i] = c;
        a.push_back({num, c});
    }

    sort(a.begin(), a.end(), cmp);
    vector<queue<int>> qa(k+1);

    for (int i = 0; i < n; i++) {
        int num = a[i].first, c = color[i];
        qa[c].push(num);
    }

    for (int i = 0; i < n; i++) {
        int num = a[i].first, c = a[i].second;
        if (qa[c].size() == 0 || qa[c].front() != num) {
            cout << "N" << endl;
            return 0;
        }
        qa[c].pop();
    }

    cout << "Y" << endl;
}
