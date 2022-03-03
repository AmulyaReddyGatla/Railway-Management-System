#include <stdio.h>
#include "node.h"

void isEmpty(struct Node* head)
{
    if(head)
        printf("List is not empty.\n");
    else
        printf("List is empty.\n");
}