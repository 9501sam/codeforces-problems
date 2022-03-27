#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, cnt1 = 0, num;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num) cnt1++;
        }

        if (cnt1 <= n / 2) {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
                cout << 0 << " ";
            cout << endl;
        } else {
            int k = n / 2;
            if (k % 2 == 1) k++;
            cout << k << endl;
            for (int i = 0; i < k; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
}
