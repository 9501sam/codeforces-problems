// https://codeforces.com/problemset/problem/1703/B
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        bool solved[26] = {};

        int n;
        string s;
        cin >> n >> s;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (!solved[s[i] - 'A']) {
                sum += 2;
                solved[s[i] - 'A'] = true;
            } else {
                sum++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}
