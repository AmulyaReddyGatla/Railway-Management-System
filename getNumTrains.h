void getNumTrains(struct Node* head)
{
    int count=0;
    while(head != NULL)
    {
        head = head->next;
        count++;
    }

    printf("\nnumber of trains: %d", count);
}
