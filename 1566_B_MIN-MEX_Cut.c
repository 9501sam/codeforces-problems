// https://codeforces.com/contest/1566/problem/B
#include <stdio.h>

#define SIZE (int)1e5

int count_part(char *s)
{
    int result = 1;
    char *p = s;
    while (*(++p) != '\0')
        if (*p != *(p-1))
            result++;
    return result;
}

int main()
{
    int t, parts;
    scanf("%d\n", &t);

    while (t--) {
        char s[SIZE+1];
        scanf("%s", s);
        parts = count_part(s);

        if (parts == 1) {
            if (*s == '0')
                printf("1");
            else
                printf("0");
        } else if (parts == 2) {
            printf("1");
        } else if (parts == 3 && *s == '1') {
            printf("1");
        } else {
            printf("2");
        }
        printf("\n");
    }

    return 0;
}
