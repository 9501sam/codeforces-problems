// https://codeforces.com/contest/1550/problem/B
#include <iostream>
using namespace std;

int part(const string str)
{
    long long part = 1, len = str.length();
    char lastChar = str[0];
    for (int i = 1; i < len; i++) {
        if (lastChar != str[i])
            part++;
        lastChar = str[i];
    }
    return part;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, sum = 0;
        string str;
        cin >> n >> a >> b;
        cin >> str;

        if (b >= 0) {
            cout << ((a + b) * str.length()) << endl;
        } else { 
            cout << (long long)(a * str.length() + b * (part(str) / 2 + 1)) << endl;
        }
    }

    return 0;
}
