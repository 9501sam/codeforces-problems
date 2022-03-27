#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int seN = 0;
        for (int i = 0; i < s.size(); i++)
            seN += (s[i] == '2');

        char ans[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                ans[i][j] = '=';
        for (int i = 0; i < n; i++)
            ans[i][i] = 'X';

        if (seN == 1 || seN == 2) {
            cout << "NO" << endl;
            continue;
        } else if (seN == 0) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    cout << ans[i][j];
                cout << endl;
            }
            continue;
        }
        
        int firstSe, lastSe, i = 0;
        int l, r;
        for (i = 0; i < n; i++)
            if (s[i] == '2') {
                firstSe = i;
                break;
            }
        for (i++; i < n; i++)
            if (s[i] == '2')
                lastSe = i;

        l = firstSe;
        r = l+1;
        while (s[r] != '2')
            r++;
        while (r <= lastSe && r < n) {
            ans[r][l] = '+';
            ans[l][r] = '-';
            l = r;
            r = l+1;
            while (s[r] != '2' && r < n)
                r++;
        }

        ans[lastSe][firstSe] = '-';
        ans[firstSe][lastSe] = '+';

        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << ans[i][j];
            cout << endl;
        }
    }
}
