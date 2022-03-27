// https://codeforces.com/contest/1559/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        unsigned int n, ai, temp;
        temp = (unsigned int)-1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ai;
            temp = temp & ai;
        }

        cout << temp << endl;
    }
}
