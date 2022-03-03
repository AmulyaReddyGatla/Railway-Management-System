#include <stdio.h>
#include <string.h>
#include "node.h"

void updateTrainStatus(struct Node **head_ref)
{
    struct Node *head = *head_ref;

    int key, t_status;
    char status[10];
    printf("Enter key to update status for: ");
    scanf("%d", &key);
    printf("Enter the new train status:\n");
    printf("1) On time.\n");
    printf("2) Delayed.\n");
    printf("3) Cancelled.\n");
    scanf("%d", &t_status);
    
    struct Node *temp = head;
    while(temp)
    {
        if(temp->key == key) break;
        temp = temp->next;
    }
    if(temp)
    {
        switch (t_status)
        {
        case 1:
            strcpy(temp->train_status, "On time");
            printf("Train status updated successfully.\n");
            break;
        case 2:
            strcpy(temp->train_status, "Delayed");
            printf("Train status updated successfully.\n");
            break;
        case 3:
            strcpy(temp->train_status, "Cancelled");
            printf("Train status updated successfully.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
    else
    {
        printf("No such key exists.\n");
    }
}