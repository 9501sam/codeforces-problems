// https://codeforces.com/problemset/problem/1575/A
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
    int i = 0;
    while (a.second[i] == b.second[i])
        i++;
    if (i % 2 == 1) return a.second[i] > b.second[i];

    return a.second[i] < b.second[i];

}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].first = i+1;
        cin >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << a[i].first << " ";
    cout << endl;
}

