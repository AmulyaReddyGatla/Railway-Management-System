#include <stdio.h>
#include "node.h"

int length(struct Node* head )
{
     int i = 0;
    while(head) 
    {
        head = head->next;
        i++;
    }
    return i;
}