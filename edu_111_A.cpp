// https://codeforces.com/contest/1550/problem/A
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double s;
        cin >> s;
        cout << (int)ceil(sqrt(s)) << endl;
    }

    return 0;
}
