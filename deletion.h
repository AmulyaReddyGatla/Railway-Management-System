

void deleteNode(struct Node** head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    // for head node with key
    if (temp != NULL && temp->key == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // free old head
        printf("Train successfully found and deleted");
        return;

    }

    //traversing
    while (temp != NULL && temp->key != key) {
        prev = temp;
        temp = temp->next;
    }

    // key not present
    if (temp == NULL)
    {
        printf("Train not found");
        return;
    }

    // Unlink the node from linked list
    prev->next = temp->next;
    printf("Train successfully found and deleted");

    free(temp); // Free memory


}
void freeList(struct Node** head)
{
   struct Node* tmp;

   while (*head != NULL)
    {
       tmp = *head;
       *head = (*head)->next;
       free(tmp);
    }

}
