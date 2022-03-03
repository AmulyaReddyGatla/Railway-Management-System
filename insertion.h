
void sortedInsert(struct Node** head_ref, struct Node* new_node)
{
    struct Node* current;

    if (*head_ref == NULL ||(*head_ref)->key >= new_node->key)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
        current = *head_ref;
        while (current->next != NULL
               && current->next->key < new_node->key) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}


//create a new node
struct Node* newNode(int id, char name[50], int key, int arrival, int departure, char tclass[50], int capacity)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->train_id = id;
    new_node->train_arrival_time=arrival;
    new_node->train_departure_time=departure;
    new_node->train_capacity=capacity;
    strcpy(new_node->train_name,name);
    new_node->key = key;
    strcpy(new_node->train_class,tclass);


    new_node->next = NULL;

    return new_node;
}


