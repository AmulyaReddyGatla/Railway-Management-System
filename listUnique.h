void least_delay();

void listUnique(struct Node** head)
{

   struct Node* temp1 = (*head) ;
   struct Node* temp2= (*head);
   struct Node* temp_head=NULL;
   int temp_key;

   temp2=temp2->next;

   //if list contains only one element
   if(temp2==NULL){

    printf("\n  After deleting duplicate elements from the list");
    printList(*head);
    return;
   }

   //list contains more than one element
   else
   {

    while(temp1!=NULL)
    {
       while(temp2!=NULL)
       {
           if(temp2->train_id == temp1->train_id )
           {
            temp_key=temp2->key;
            struct Node* new_node = newNode(temp2->train_id, temp2->train_name, temp2->key, temp2->train_arrival_time, temp2->train_departure_time, temp2->train_class, temp2->train_capacity);
            sortedInsert(&temp_head, new_node);
            deleteNode(&(*head), temp_key);


            temp_key=temp1->key;
            struct Node* new_node2 = newNode(temp1->train_id, temp1->train_name, temp1->key, temp1->train_arrival_time, temp1->train_departure_time, temp1->train_class, temp1->train_capacity);
            sortedInsert(&temp_head, new_node2);
            deleteNode(&(*head), temp_key);

           }

          temp2=temp2->next;
       }
       temp1=temp1->next;
   }

    least_delay(&temp_head, &(*head));
   printf("\n  After deleting duplicate elements from the list");
 }
 return ;
}


void least_delay(struct Node** temp_head, struct Node** head){

  if( *temp_head == NULL){
    return;
  }
  else{

  int minimum=abs((*temp_head)->train_arrival_time-(*temp_head)->train_departure_time),diff,capacity= (*temp_head)->train_capacity,id= (*temp_head)->train_id,key = (*temp_head)->key;
   int arr_time=(*temp_head)->train_arrival_time,dep_time= (*temp_head)->train_departure_time;
   char name[50], t_class[50];
   strcpy(name,(*temp_head)->train_name);
   strcpy(t_class, (*temp_head)->train_class);

   struct Node* start = (*temp_head);

   while(start!= NULL){

       diff=abs(start->train_arrival_time - start->train_departure_time);

       if(minimum>diff){
          id= start->train_id;
          strcpy(name,start->train_name);
          key= start->key;
          strcpy(t_class, start->train_class);
          capacity= start->train_capacity;
          arr_time=start->train_arrival_time;
          dep_time=start->train_departure_time;
       }
       start=start->next;
   }
    struct Node* new_node = newNode(id,name,key,arr_time,dep_time,t_class,capacity);
    sortedInsert(&(*head), new_node);
    return;
  }

}
