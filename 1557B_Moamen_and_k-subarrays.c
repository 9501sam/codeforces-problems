// https://codeforces.com/contest/1557/problem/B
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int index;
} element;

int compare_elements(const void *p, const void *q)
{
    return (*(element **)p)->num - (*(element **)q)->num;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int i, n, k, num, k_min = 1;
        scanf("%d %d", &n, &k);
        element *a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            a[i] = (element *)malloc(sizeof(element));
            a[i]->num = num;
            a[i]->index = i;
        }

        qsort(a, n, sizeof(element *), compare_elements);

        for (int i = 1; i < n; i++)
            if (a[i-1]->index + 1 != a[i]->index)
                k_min++;
        if (k_min <= k)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
