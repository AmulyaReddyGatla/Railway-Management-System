

void List_Difference_of_Lists(struct Node** head_list1,struct Node** head_list2,struct Node** head_list3){
    struct Node *Intersection=NULL;
    Intersection_of_Lists(head_list1,head_list2,&Intersection);
    struct Node* head1= (*head_list1);
    
    
    while(head1){
        struct Node* head2= Intersection;
       
           if(!ispresent(&head2,head1->key)){
               struct Node* new_node = newNode(head1->train_id, head1->train_name, head1->key, head1->train_arrival_time, head1->train_departure_time, head1->train_class, head1->train_capacity);
                    sortedInsert(head_list3, new_node);
           }
           
       
       head1=head1->next;
    }

}