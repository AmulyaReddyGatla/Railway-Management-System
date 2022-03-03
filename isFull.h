#include <stdio.h>
#include "node.h"

void isFull(struct Node* head, const unsigned int capacity)
{
    unsigned int i = 0;
    while(head) 
    {
        head = head->next;
        i++;
    }
    if(i == capacity)
        printf("List is full.\n");
    else
        printf("List is not full.\n");
}