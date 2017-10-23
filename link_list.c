#include<stdio.h>
#include<windows.h>
#include<malloc.h>
typedef struct list
{
    int num;
    struct list *next;
}list;
list* create_node(int number)
{
    list *temp=(list*)malloc(sizeof(list));
    temp->num=number;
    temp->next=NULL;
    return temp;
}
void add_value(list **head)
{
    int num;
    list *new_node,*temp;
    printf("enter a number: ");
    scanf("%d",&num);
    new_node=create_node(num);
    if(*head==NULL)
        {
            *head=new_node;
        }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=new_node;
    }
}
void delete_value(list **head)
{
    if(*head==NULL)
    {
        printf("no value to delete\n");
        return;
    }
    list *temp;
    temp=*head;
    *head=temp->next;
    free(temp);
    printf("deleted\n");
}
void show_value(list *head)
{
    if(head==NULL)
    {
        printf("there is no value to print\n");
        return;
    }
    printf("all values in this link list are\n");
    while(head!=NULL)
    {
        printf("%d\n",head->num);
        head=head->next;
    }
}
int List (void)
{
    int c;
    printf("1) insert a value.\n");
    printf("2) show all value.\n");
    printf("3) delete first value.\n");
    printf("4) exit.\n");
    printf("enter your chose: ");
    scanf("%d",&c);
    return c;
}
int main()
{
    list *head=NULL;
    int c;
    while(1)
    {
        c=List();
        switch (c)
        {
    case 1:
        add_value(&head);
        break;
    case 2:
        show_value(head);
        break;
    case 3:
        delete_value(&head);
        break;
    case 4:
        exit(0);
    default:
        printf("please chose correctly\n");
        }
        getchar();
        getchar();
        system("cls");
    }
}
