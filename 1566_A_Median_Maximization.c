// https://codeforces.com/contest/1566/problem/A
#include <stdio.h>

int main()
{
    long t, n, s;

    scanf("%ld", &t);

    while (t--) {
        scanf("%ld %ld", &n, &s);
        printf("%ld\n", s / (n - (n + 1) / 2 + 1));
    }

    return 0;
}
