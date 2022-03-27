// https://codeforces.com/gym/103427/problem/F
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

#define NUM_LET 26
#define G(c) g[(c) - 'a']
#define CHR(i) (char)('a' + i)

string f(string s)
{
    int g[NUM_LET] = {};
    set<char> occ;
    for (int i = s.size() - 1; i >= 0; i--)
        if (occ.count(s[i]) == 0) {
            g[s[i] - 'a'] = occ.size();
            occ.insert(s[i]);
        }
    for (int i = 0; i < s.size(); i++) {
        int tmp = G(s[i]);
        s[i] = CHR(tmp);
    }
    return s;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;
    vector<string> v(n);
    for (int i = 1; i <= n; i++) {
        v[i-1] = f(s.substr(0, i));
    }

    string ans = v[0];
    for (int i = 1; i < n; i++)
        if (v[i].compare(ans) > 0) 
            ans = v[i];

    cout << ans << endl;
}
