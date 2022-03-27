// https://codeforces.com/problemset/problem/1606/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        s[s.size()-1] = s[0];
        cout << s << endl;
    }
}

