#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "node.h"
#include "insertion.h"
#include "deletion.h"
#include "getNumTrains.h"
#include "isEmpty.h"
#include "isFull.h"
#include "updateTrainStatus.h"
#include "getlongeststay.h"
#include "listUnique.h"
#include "listUnion.h"
#include "Intersection_of_Lists.h"
#include "List_Difference_of_Lists.h"
#include "List_Symmetric_Difference_of_Lists.h"
#include "ispresent.h"
#include "length.h"


#define CAPACITY 10

void printList(struct Node* head)
{
    printf("\n Created Linked List\n");
    struct Node* temp = head;
    int i=1;
    while (temp != NULL) {
        printf("\n%d. \nID: %d\nNAME: ",i, temp->train_id);
        puts(temp->train_name);
        printf("ARRIVAL %d:%d  \nDEPARTURE %d:%d\n", temp->train_arrival_time/100,temp->train_arrival_time%100, temp->train_departure_time/100,temp->train_departure_time%100);
        printf("KEY: %d  \nCLASS: ", temp->key);
        puts(temp->train_class);
        printf("CAPACITY: %d  \n\n", temp->train_capacity);
        temp = temp->next;
        i++;
    }
}

int isok(char s[]){

}

int main()
{
    int a,b;
    char name[50],tclass[50];
    int id, capacity, arrival, departure, key,flag;
    struct Node* head = NULL;
    struct Node* head1 = NULL;
    struct Node* head3=NULL;


    while(a != -1)
    {

        printf("\n1. Insertion \n2. Deletion \n3. Show number of trains \
                \n4. Check if list is empty \n5. Check if list is full \n6. Update Train status \
                \n7. Get Longest Stay \n8. List unique \n9. List union \
                \n10. List intersection \n8. List difference \n9. List symmetric difference \
                -1. Exit\n\nenter: ");
        scanf("%d", &a);

        switch(a)
        {
            case 1:

                printf("enter train name: \n\t1. Rajdhani Express \n\t2. Duronto Express \n\t3. Vivek Express \n\t4. Humsafar Express \n\t5. Satbadi Express \n\t\tENTER CHOICE: ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                        strcpy(name,"Rajdhani Express");
                        id= 1234;
                        break;

                    case 2:
                        strcpy(name,"Duronto Express");
                        id= 2345;
                        break;

                    case 3:
                        strcpy(name,"Vivek Express");
                        id= 3456;
                        break;

                    case 4:
                        strcpy(name,"Humsafar Express");
                        id= 4567;
                        break;

                    case 5:
                        strcpy(name,"Satbadi Express");
                        id= 5678;
                        break;

                    default: printf("invalid choice");
                }
                printf("enter arrival time: ");
                while(1)
                {
                scanf("%d", &arrival);
                if(arrival<=2359){
                    break;
                }
                else{
                    printf("invalid arrival time!! please re enter: ");

                }}
                printf("enter departure time: ");
                while(1)
                {
                scanf("%d", &departure);
                if(departure<=2359&&arrival!=departure){
                    break;
                }
                else{
                    printf("invalid departure time!! please re enter: ");

                }}



                printf("enter train capacity: ");
                scanf("%d", &capacity);

                printf("enter train class: ");
                while(1)
                {
                scanf("%s",tclass);
                //todo
                if(isok){
                    break;
                }
                else{
                    printf("invalid train class type !! please re enter one of them : ");

                }}


                //finding key
                key=(arrival*10000)+id;



                printf("enter which data set u want to insert : \n\t1. dataset1 \n\t2. dataset2 \n\t\tENTER CHOICE: ");
                int cc;
                scanf("%d",&cc);
                switch(cc){
                    case 1:
                         flag=ispresent(&head,key);
                        if(flag){
                            struct Node *current=head;
                            while(current != NULL){
                                if (current->key==key){
                                    current->train_departure_time=departure;
                                    current->train_capacity=capacity;
                                    strcpy(current->train_class,tclass);

                                }
                                current = current->next;
                            }
                        }
                        else{
                            struct Node* new_node = newNode(id, name, key, arrival, departure, tclass, capacity);
                             sortedInsert(&head, new_node);
                        }

                        break;
                    case 2:
                         flag=ispresent(&head1,key);
                        if(flag){
                            struct Node *current=head1;
                            while(current != NULL){
                                if (current->key==key){
                                    current->train_departure_time=departure;
                                    current->train_capacity=capacity;
                                    strcpy(current->train_class,tclass);

                                }
                                current = current->next;
                            }
                        }
                        else{
                            struct Node* new_node = newNode(id, name, key, arrival, departure, tclass, capacity);
                             sortedInsert(&head1, new_node);
                        }

                        break;
                    default:
                        printf("Invalid choice");
                }

                printList(head);
                printList(head1);
                break;

            case 2:
                printf("enter train name: \n\t1. Rajdhani Express \n\t2. Duronto Express \n\t3. Vivek Express \n\t4. Humsafar Express \n\t5. Satbadi Express \n\t\tENTER CHOICE: ");
                scanf("%d",&b);

                switch(b)
                {
                    case 1:
                        strcpy(name,"Rajdhani Express");
                        id= 1234;
                        break;

                    case 2:
                        strcpy(name,"Duronto Express");
                        id= 2345;
                        break;

                    case 3:
                        strcpy(name,"Vivek Express");
                        id= 3456;
                        break;

                    case 4:
                        strcpy(name,"Humsafar Express");
                        id= 4567;
                        break;

                    case 5:
                        strcpy(name,"Satbadi Express");
                        id= 5678;
                        break;

                    default:
                        printf("Invalid choice");
                }

                printf("enter arrival time of train to be deleted from list: ");
                scanf("%d", &arrival);

                key=(arrival*10000)+id;

                deleteNode(&head,key);

                printList(head);
                break;

            case 3:
                getNumTrains(head);
                break;

            case 4:
                isEmpty(head);
                break;

            case 5:
                isFull(head, CAPACITY);
                break;

            case 6:
                updateTrainStatus(&head);
                break;

            case 7:
                printf("enter from which data set u want to find longest stay  : \n\t1. dataset1 \n\t2. dataset2 \n\t\tENTER CHOICE: ");
                int choice;
                scanf("%d",&choice);
                switch(choice){
                    case 1:
                        if(head==NULL){
                         printf("\nList is empty\n");
                         }
                        else{
                          getlongeststay(head);
                         }
                         break;

                    case 2:
                         if(head1==NULL){
                         printf("\nList is empty\n");
                         }
                        else{
                          getlongeststay(head1);
                         }
                         break;

                }
                break;

            case 8:
                //listUnique(&head);
                break;

            case 9:
                freeList(&head3);
                listUnion(&head,&head1,&head3);
                printList(head3);
                break;

            case 10:
                // Intersection_of_Lists()
                freeList(&head3);
                Intersection_of_Lists(&head,&head1,&head3);
                printList(head3);
                break;

            case 11:
                freeList(&head3);
                List_Difference_of_Lists(&head,&head1,&head3);
                printList(head3);
                break;

            case 12:
                // List_Symmetric_Difference_of_Lists()
                freeList(&head3);
                List_Symmetric_Difference_of_Lists(&head,&head1,&head3);
                printList(head3);
                break;

            default:
                break;
        }
    }

    return 0;
}
