#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef void* ll_val_type;

typedef struct
{
    void *next;
    ll_val_type value;
} node;

node *lln_create(void);
ll_val_type lln_value(node *n);
node *lln_next(node *n);
int ll_size(node *start);
node *ll_get(node *start, int index);
node *ll_last(node *start);
void ll_append(node *start, ll_val_type value);
