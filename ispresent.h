#  include<stdio.h>

int ispresent(struct Node** head,int key){
    int flag=0;
                struct Node *temp = (*head);
                while(temp != NULL)
                {
                    if(temp->key==key)
                    {
                        printf("\nEntry already exists, updating value\n");
                        flag=1;
                        break;
                    }

                    temp = temp->next;
                }
            return flag;
}
