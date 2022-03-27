// https://codeforces.com/contest/1594/problem/C
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string str;
        cin >> n >> c >> str;
        bool is_front_c, is_second_last_c, is_last_c;
        is_last_c = str[n-1] == c;
        is_second_last_c = str[n-2] == c;
        is_front_c = true;
        for (int i = 0; i < n-2; i++)
            if (str[i] != c) {
                is_front_c = false;
                break;
            }

        if (!is_last_c && !is_second_last_c) {
            cout << 2 << endl;
            cout << n << " " << n-1 << endl;
        } else if(is_last_c && !is_second_last_c) {
            cout << 1 << endl;
            cout << n << endl;
        } else if(!is_last_c && is_second_last_c) {
            cout << 1 << endl;
            cout << n-1 << endl;
        } else if(!is_front_c) {
            cout << 1 << endl;
            cout << n-1 << endl;
        } else {
            cout << 0 << endl;
            cout << endl;
        }
    }
    return 0;
}

