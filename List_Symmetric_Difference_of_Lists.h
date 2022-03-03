
void List_Symmetric_Difference_of_Lists(struct Node** head_list1,struct Node** head_list2,struct Node** head_list3){
   struct Node* ld1=NULL;
   struct Node* ld2=NULL;
   List_Difference_of_Lists(head_list1,head_list2,&ld1);
    List_Difference_of_Lists(head_list1,head_list2,&ld2);
    Intersection_of_Lists(&ld1,&ld2,head_list3);
}