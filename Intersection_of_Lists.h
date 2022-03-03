

#define max_size 50




void Intersection_of_Lists(struct Node** head_list1,struct Node** head_list2,struct Node** head_list3){
    
    struct Node* a= (*head_list1);
 
    struct Node* b = (*head_list2);;
   
 
    // advance comparing the first nodes in both lists.
    // When one or the other list runs out, we are done.
    while (a != NULL && b != NULL)
    {
        // found a node for the intersection
        if (a->key == b->key)
        {
            if(a->train_capacity>b->train_capacity){
                struct Node* new_node = newNode(a->train_id, a->train_name,a->key, a->train_arrival_time, a->train_departure_time, a->train_class, a->train_capacity);
                    sortedInsert(head_list3, new_node);
            }
            else{
                 struct Node* new_node = newNode(b->train_id, b->train_name,b->key, b->train_arrival_time, b->train_departure_time, b->train_class, b->train_capacity);
                    sortedInsert(head_list3, new_node);
            }
            a = a->next;
            b = b->next;
        }
        // advance the smaller list
        else if (a->key< b->key) {
            a = a->next;
        }
        else {
            b = b->next;
        }
    }
 
    
   
    
}

