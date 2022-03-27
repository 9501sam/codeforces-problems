// https://codeforces.com/contest/1602/problem/0
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int min = 500;
        for (int i = 0; i < str.size(); i++)
            if ((int) str[i] < min)
                min = (int) str[i];

        cout << (char) min << " ";
        int i = 0;
        while (str[i] != min)
            cout << str[i++];
        i++;
        while (str[i] != '\0')
            cout << str[i++];
        cout << endl;
    }
}
