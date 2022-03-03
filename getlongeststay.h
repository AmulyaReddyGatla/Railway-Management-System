void getlongeststay(struct Node* head_ref)
{
   int maximum=abs(head_ref->train_arrival_time-head_ref->train_departure_time),diff,capacity= head_ref->train_capacity,id= head_ref->train_id,key = head_ref->key;
   char name[50], t_class[50];
   strcpy(name,(head_ref)->train_name);
   strcpy(t_class, (head_ref)->train_class);


   while(head_ref!= NULL){

       diff=abs(head_ref->train_arrival_time - head_ref->train_departure_time);

       if(maximum < diff){
          maximum=diff;
          id= head_ref->train_id;
          strcpy(name,head_ref->train_name);
          key= head_ref->key;
          strcpy(t_class, head_ref->train_class);
          capacity= head_ref->train_capacity;
       }
       head_ref=head_ref->next;
   }

   int max_hrs= maximum/100,max_mins=maximum%100;

   if( (max_mins)>=60 ){
    max_mins= max_mins-40;
   }

   printf("\nDetails of Train with longest stay is :  \n\n");
   printf("STAY TIME: %d hrs %d mins\nID: %d\nNAME : %s\nKEY: %d\nCLASS : %s\nCAPACITY : %d\n",max_hrs,max_mins,id,name,key,t_class,capacity);
   return;
}
