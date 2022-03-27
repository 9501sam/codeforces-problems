// https://codeforces.com/contest/1559/problem/B
#include <iostream>
using namespace std;

#define INVERT(ch) (ch) == 'R' ? 'B' : 'R'

void fillFront(char str[], int n, int firstIndex)
{
    char ch1, ch2;
    if (firstIndex == n) {
        ch1 = 'R';
        ch2 = 'B';
    } else {
        ch1 = str[firstIndex];
        ch2 = INVERT(ch1);
    }
    
    for (int i = firstIndex-2; i >= 0; i = i - 2)
        str[i] = ch1;

    for (int i = firstIndex-1; i >= 0; i = i - 2)
        str[i] = ch2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, firstIndex;
        scanf("%d", &n);
        firstIndex = n;
        char str[n];
        for (int i = 0; i < n; i++) {
            scanf("%c", str + i);
            if (firstIndex == n && str[i] != '?')
                firstIndex = i;
        }

        fillFront(str, n, firstIndex);

        char temp;
        for (int i = firstIndex; i < n; i++) {
            if (str[i] == '?') {
                str[i] = INVERT(temp);
                temp = INVERT(temp);
            } else {
                temp = str[i];
            }
        }
        for (int i = 0; i < n; i++)
            cout << str[i];
    }
}
