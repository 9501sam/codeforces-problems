// https://codeforces.com/problemset/problem/1494/A
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a = 0, b = 0, c = 0;
        string s;
        cin >> s;
        n = s.size();
        for (int i = 0; i < n; i++) {
            a += (s[i] == 'A');
            b += (s[i] == 'B');
            c += (s[i] == 'C');
        }

        cout << s << endl;
        cout << a << " " << b << " " << c << endl;
        char f = s[0];
        char b = s[n - 1];
        if (f == b) {
            cout << "NO" << endl;
        } else if ((a + b == c && (f == 'C' && (b)) && ()) || 
                (b + c == a && () && ()) || 
                (c + a == b && () && ())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
