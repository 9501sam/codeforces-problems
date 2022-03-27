// https://codeforces.com/gym/103428/problem/D 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    int q;
    cin >> s >> q;
    int table[s.size()];
    table[0] = -1;
    int i, j = -1;
    for (int i = 1; i < s.size(); i++) {
        while (s[i] != s[j+1] && j != -1) j = table[j];
        if (s[i] == s[j+1]) j++;
        else j = -1;
        table[i] = j;
    }

    vector<int> v;
    j = s.size() - 1;

    while (j > 0 && table[j] != -1) {
        j = table[j];
        v.push_back(j);
    }
    // v.push_back(-1);

    // int i, k, mid;
    // int ans[s.size()] = {};

    // mid = (s.size() - 1) / 2;
    // k = 0;
    // i = mid;
    // while (i >= 0 && k < v.size()) {
    //     while (i > v[k]) ans[i--] = v.size() - k - 1;
    //     k++;
    // }

    // i = 0;
    // j = s.size() - 1;
    // while (i <= j)
    //     ans[j--] = ans[i++];
   
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << endl;

    int a[s.size()] = {};
    bool f[s.size()] {false};
    while (q--) {
        int I, ans = 0;
        cin >> I;
        I--;
        if (f[I]) {
            cout << a[I] << endl;
            continue;
        }
        for (int i = 0; i < v.size(); i++)
            if ((v[i] < I) && (I < (s.size() - v[i] - 1))) ans++;
        a[I] = ans;
        f[I] = true;
        cout << ans << endl;
    }
}

