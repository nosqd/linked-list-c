#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    node *list = lln_create();

    ll_append(list, "Hello, world");

    printf("List size: %d\n", ll_size(list));
    printf("Last array value: %s\n", (char*)lln_value(ll_last(list)));
    free(list);
    return 0;
}
