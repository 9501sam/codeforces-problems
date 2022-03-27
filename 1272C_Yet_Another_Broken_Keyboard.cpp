// https://codeforces.com/problemset/problem/1272/C
#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    char kb[k];
    for (int i = 0; i < k; i++)
        cin >> kb[i];

    bool f[n] = {};
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        int j = 0;
        for (j = 0; j < k; j++)
            if (ch == kb[j]) break;
        if (j < k) f[i] = true;
    }

    ll res = 0;
    ll tmp = (f[0] == true);
    for (int i = 1; i < n; i++) {
        if (f[i] == true) {
            tmp++;
        } else if ((f[i] == false) && (f[i-1] == true)) {
            if (tmp == 1)
                res++;
            else if (tmp > 1)
                res += (tmp * (tmp - 1)) / 2 + tmp;
            tmp = 0;
        }
    }
    if (tmp == 1)
        res++;
    else if (tmp > 1)
        res += (tmp * (tmp - 1)) / 2 + tmp;
    

    cout << res << endl;
}

