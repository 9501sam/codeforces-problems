// https://codeforces.com/contest/1566/problem/C
#include <stdio.h>
#include <stdlib.h>

#define TYPE(index) (tab[0][(index)] != tab[1][(index)] ? NOT_EQ :           \
                ((tab[0][(index)] == '0' && tab[1][(index)] == '0') ? ZEROS : ONES))    

typedef enum {
    NOT_EQ,
    ZEROS,
    ONES
} type;

int main()
{
    int t, n;

    scanf("%d", &t);

    while (t--) {
        int result = 0, i = 0;

        scanf("%d", &n);
        char tab[2][n+1];
        scanf("%s", tab[0]);
        scanf("%s", tab[1]);

        while (i < n) {
            if (TYPE(i) == NOT_EQ) { 
                result += 2;
                i++;

            } else if ((i < n-1) && TYPE(i) != TYPE(i+1) && TYPE(i+1) != NOT_EQ) { 
                result += 2;
                i += 2;

            } else if (TYPE(i) == ZEROS) { 
                result += 1;
                i++;

            } else if (TYPE(i) == ONES) { 
                i++;

            } else {
                fprintf(stderr, "error\n");
                exit(EXIT_FAILURE);
            }
        }

        printf("%d\n", result);
    }

    return 0;
}
