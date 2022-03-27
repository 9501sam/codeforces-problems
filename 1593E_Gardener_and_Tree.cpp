// https://codeforces.com/problemset/problem/1593/E
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> g(n, vector<int>());
        vector<int> rem(n, 0);
        vector<int> layer(n, 0);

        for (int i = 1; i < n; i++) {
            int x, y;
            cin >> x >> y;
        }
    }
}

