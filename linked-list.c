#include "linked-list.h"

node *lln_create(void)
{
    node *n = malloc(sizeof(node));

    n->next = NULL;
    n->value = 0;

    return n;
}

ll_val_type lln_value(node *n)
{
    return n->value;
}

node *lln_next(node *n)
{
    node *next = (node *)n->next;

    return next;
}

int ll_size(node *start)
{
    int i = 0;
    node *n = start;
    while (lln_next(n) != NULL)
    {
        n = n->next;
        i++;
    }

    return i;
}

node *ll_get(node *start, int index)
{
    node *n = start;
    int ci = -1; // because the actual first element is the list start
    while (ci != index)
    {
        if (lln_next(n) == NULL)
        {
            return NULL;
        }
        n = n->next;
        ci++;
    }

    return n;
}

node *ll_last(node *start)
{
    if (start->next == NULL)
        return start;
    return ll_get(start, ll_size(start) - 1);
}

void ll_append(node *start, ll_val_type value)
{
    node *last = ll_last(start);
    node *val = lln_create();
    val->next = NULL;
    val->value = value;
    last->next = val;
}
