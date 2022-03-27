// https://codeforces.com/problemset/problem/522/A
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB_SIZE 1
#define MAX_NAME_LEN 24

typedef struct __user {
    char *name;
    int depth;
    struct __user *next;
} user;

void lower(char *str)
{
    for (char *p = str; *p; p++)
        if ('A' <= *p && *p <= 'Z')
            *p += 'a' - 'A';
}

int hash_function(const char *key)
{
    int sum = 0;
    while (*key) 
        sum += *key++;
    return sum % TAB_SIZE;
}

void insert(user *table[], user *u)
{
    int bucket = hash_function(u->name);
    user *first = table[bucket];
    table[bucket] = u;
    u->next = first;
}

user *search(user *table[], const char *name)
{
    int bucket = hash_function(name);
    user *ptr;
    for (ptr = table[bucket]; ptr; ptr = ptr->next)
        if (strcmp(name, ptr->name) == 0)
            return ptr;
    return NULL;
}

int main()
{
    user *table[TAB_SIZE];
    user *poly = (user *)malloc(sizeof(user));
    poly->name = (char *)malloc(sizeof(char) * strlen("polycarp") + 1);
    strcpy(poly->name, "polycarp");
    poly->depth = 1;
    insert(table, poly);

    int n, max_depth = 1;
    char s1[MAX_NAME_LEN+1], s2[MAX_NAME_LEN+1], s3[MAX_NAME_LEN+1], ch;
    scanf("%d", &n);
    while (n--) {
        scanf("%s%s%s", s1, s2, s3);
        lower(s1);
        lower(s3);
        user *temp = (user *)malloc(sizeof(user));
        user *parent = search(table, s3);
        temp->name = (char *)malloc(sizeof(char) * strlen(s1) + 1);
        strcpy(temp->name, s1);
        temp->depth = parent->depth + 1;
        if (temp->depth > max_depth)
            max_depth = temp->depth;
        insert(table, temp);
    }
    printf("%d\n", max_depth);
    return 0;
}
