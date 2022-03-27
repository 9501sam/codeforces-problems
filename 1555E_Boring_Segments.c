// https://codeforces.com/contest/1555/problem/E
#include <stdio.h>
#include <stdlib.h>

typedef struct __segment {
    int l;
    int r;
    unsigned long w;
    struct __segment *next;
} segment;

typedef struct __path {
    int last_end;
    int end;
    unsigned long cost;
    struct __path *next;
} path;

typedef struct {
    path *head;
    path *last;
    int size;
} path_queue;

typedef struct __path_val {
    int goal;
    unsigned long cost;
    struct __path_val *next;
} path_val;

segment *read_seg();
void insert_to_segtab(segment **, segment *);

path *pop_path(path_queue *);
void push_path(path_queue *, path *);

void insert_to_path_val_list(path_val **, int, unsigned long);

int main()
{
    int n, m, l, r, w;
    scanf("%d %d", &n, &m);
    segment *segtab[m+1], *seg_ptr;
    for (int i = 0; i <= m; i++)
        segtab[i] = NULL;
    for (int i = 0; i < n; i++) {
        segment *seg = read_seg();
        insert_to_segtab(segtab, seg);
    }
    path_queue *pq = (path_queue* )malloc(sizeof(path_queue));
    pq->size = 0;
    seg_ptr = segtab[1];
    while (seg_ptr != NULL) {
        printf("%d", seg_ptr->l);
        path *p = (path *)malloc(sizeof(path));
        p->last_end = 1;
        p->end = seg_ptr->r;
        p->cost = seg_ptr->w;
        push_path(pq, p);
        seg_ptr = seg_ptr->next;
    }

    
    return 0;
}

segment *read_seg()
{
    int l, r, w;
    scanf("%d %d %d", &l, &r, &w);
    segment *result = (segment *)malloc(sizeof(segment));
    result->l = l;
    result->r = r;
    result->w = w;
    result->next = NULL;
    return result;
}

void insert_to_segtab(segment **segtab, segment *seg)
{
    segment *tmp = *(segtab + seg->l);
    seg->next = tmp;
    *(segtab + seg->l) = seg;
}

path *pop_path(path_queue *pq)
{
    path *head = pq->head;
    path *last = pq->last;
    pq->head->next = head->next;
    (pq->size)--;
    return head;
}

void push_path(path_queue *pq, path *p)
{
    if (!(pq->last))
        return;
    pq->last = pq->last->next = p;
}

void insert_to_path_val_list(path_val **head, int goal, unsigned long cost)
{
    path_val *tmp = (path_val *)malloc(sizeof(path_val));
    tmp->goal = goal;
    tmp->cost = cost;
}
