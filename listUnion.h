void listUnion(struct Node** head1,struct Node** head2,struct Node** head_list){

  struct Node* temp1 = *head1;
  struct Node* temp2 = *head2;
  int count;

  //struct Node* head3 = (*head_list);


  while(temp1!= NULL){

     struct Node* new_node = newNode(temp1->train_id, temp1->train_name, temp1->key, temp1->train_arrival_time, temp1->train_departure_time, temp1->train_class, temp1->train_capacity);
     sortedInsert(head_list, new_node);
     temp1 = temp1->next;
  }

  temp1= *head1;

//printList(*head_list);
    while (temp2!= NULL) {
        count=0;
        while(temp1!=NULL){
                if( (temp1->train_departure_time == temp2->train_departure_time) && (temp1->key == temp2->key) && (temp1->train_capacity == temp2->train_capacity)){

                     count++;
                }
            temp1=temp1->next;
    }
    if(count==0){
     struct Node* new_node = newNode(temp2->train_id, temp2->train_name, temp2->key, temp2->train_arrival_time, temp2->train_departure_time, temp2->train_class, temp2->train_capacity);
     sortedInsert(head_list, new_node);
    }
    temp2 = temp2->next;
}
}

