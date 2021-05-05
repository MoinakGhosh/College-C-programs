#include <stdio.h>>
#include <stdlib.h>
typedef struct list{
    int value;
    struct list *next;
}S;
void insert_end();
void insert_beg();
void create(S*);
void display();
S *head;
int main()
{
    int op;
    printf("Linked list program start : \n==============================\n");
    head = (S *)malloc(sizeof(S));
    create(head);
    display();
    printf("Enter 1.Insert Beg\n2.Enter Insert any position\nEnter 3.Insert End\nEnter 4.Exit\n");
    do{
        printf("Enter the Operation : ");
        scanf("%d",&op);
        switch(op){
        case 1:
            insert_beg();
            display();
            break;
        case 2:
            insert_mid();
            display();
            break;
        case 3:
            insert_end();
            display();
            break;
        case 4:
            printf("End\n");
            break;
        default:
            printf("Wrong input.\n");
            break;
        }
    }while(op!=4);
    return 0;
}
void insert_mid()
{
    S * ptr = head;
    int val;
    printf("Enter the key after which you want to insert : ");
    scanf("%d",&val);
    while(ptr!=NULL)
    {
        if(ptr->value==val)
        {
            S *new_node = (S *)malloc(sizeof(S));
            printf("Enter the value : ");
            scanf("%d",&new_node->value);
            new_node->next = ptr->next;
            ptr->next = new_node;
            display();
        }
        ptr = ptr->next;
    }
}
void insert_beg()
{
    S *new_node = (S *)malloc(sizeof(S));
    printf("Enter the value : ");
    scanf("%d",&new_node->value);
    new_node->next = head;
    head = new_node;
}
void insert_end()
{
    S *ptr = head;
    S *new_node = (S *)malloc(sizeof(S));
    while(ptr->next!=NULL)
        ptr = ptr->next;
    printf("Enter the value : ");
    scanf("%d",&new_node->value);
    new_node->next = ptr->next;
    ptr->next = new_node;
}
void display()
{
    S *ptr = head;
    printf("Linked list is : ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}
void create(S *ptr)
{
    char ch;
    printf("Enter the value : ");
    scanf("%d",&ptr->value);
    ptr->next = NULL;
    fflush(stdin);
    printf("Are you Want to Insert next node : ");
    ch = getchar();
    if(ch=='y' || ch=='Y')
    {
        ptr->next = (S *)malloc(sizeof(S));
        ptr = ptr->next;
        create(ptr);
    }
}
