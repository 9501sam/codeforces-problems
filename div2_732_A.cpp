// https://codeforces.com/contest/1546/problem/A
#include <iostream>
using namespace std;

void op(int *a, int i, int j)
{
    (*(a + i))--;
    (*(a + j))--;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n], sumA = 0;
        int b[n], sumB = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sumA += a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sumB += b[i];
        }

        if (sumA != sumB)
            continue;

        for (int index = 0; index < n; index++) {
            while (a[index] != b[index]) {
                if (a[index] > b[index]) {
                    cout << index << " " << index + 1 << endl;
                    op (a, index, index + 1);
                } else {
                    int i = index;
                    while (a[++i] < 0)
                        ;
                    cout << i << " " << index << endl;
                    op (a, i, index);
                }
            }
        }
    }

    return 0;
}

