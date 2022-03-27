// https://codeforces.com/contest/1586/problem/0
#include <iostream>
using namespace std;

#define SUM_SUB(i, j) (A[j] - A[(i)-1])

bool is_composite(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0) 
            return true;
    return false;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1], A[n+1];

        a[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        A[0] = 0;
        for (int i = 1; i <= n; i++)
            A[i] = A[i-1] + a[i];

        // cout << "a: ";
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << " ";
        // cout << endl;
        // for (int i = 0; i <= n; i++)
        //     cout << A[i] << " ";
        // cout << endl;

        int max_len = 0, ans_i, ans_j;
        for (int i = 1; i <= n; i++)
            for (int j = i + max_len; j <= n; j++)
                if (is_composite(SUM_SUB(i, j))) {
                    ans_i = i;
                    ans_j = j;
                    max_len = j - i + 1;
                }
        cout << max_len << endl;
        for (int k = ans_i; k <= ans_j; k++)
            cout << k << " ";
        cout << endl;

    }
    return 0;
}
