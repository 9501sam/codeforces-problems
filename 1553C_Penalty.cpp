// https://codeforces.com/problemset/problem/1553/C
#include <iostream>
#include <string>
using namespace std;

#define MAX (A-B+Ka)
#define MIN (A-B-Kb)

char s[15];
int A, B, Ka, Kb; // A +- Ka

void read(int i)
{
    if (i % 2 == 1) {
        if (s[i] == '?') {
            Ka++;
        } else if (s[i] == '1') {
            A++;
        }
    } else {
        if (s[i] == '?') {
            Kb++;
        } else if (s[i] == '1') {
            B++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        for (int i = 1; i <= 10; i++)
            cin >> s[i];

        A = 0; B = 0; Ka = 0; Kb = 0; // A +- Ka

        int i;
        for (i = 1; i <= 5; i++)
            read(i);

        // cout << "A = " << A << endl;
        // cout << "B = " << B << endl;
        // cout << "Ka = " << Ka << endl;
        // cout << "Kb = " << Kb << endl;
        // cout << endl;

        read(6);
        if (MAX >= 3 || MIN <= -3) {
            cout << 6 << endl;
            continue;
        }

        read(7);
        if (MAX >= 3 || MIN <= -2) {
            cout << 7 << endl;
            continue;
        }

        read(8);
        if (MAX >= 2 || MIN <= -2) {
            cout << 8 << endl;
            continue;
        }

        read(9);
        if (MAX >= 2 || MIN <= -1) {
            cout << 9 << endl;
            continue;
        }

        cout << 10 << endl;
    }
}
