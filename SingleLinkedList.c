#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void in_begg();
void in_end();
void in_pos();
void del_begg();
void del_end();
void del_pos();
void search();
struct node
{
    int data;
    struct node *next;
};
struct node*head=NULL;
void create()
{
    int data;
    struct node *temp=head,*last,*nn;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&data);
    nn->data=data;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
    }
}
void in_begg()
{
    struct node*nn,*temp=head;
    int data;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the begging data: ");
    scanf("%d",&data);
    nn->next=NULL;
    nn->data=data;
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        nn->next=head;
        head=nn;
    }
}
void in_end()
{
    int data;
    struct node *nn,*temp=head;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data begging: ");
    scanf("%d",&data);
    nn->data=data;
    nn->next=NULL;
    if(head=NULL)
    {
        head=nn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
    }
}
void del_begg()
{
    struct node*temp=head;
    head=temp->next;
}
void del_end()
{
    struct node*temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void in_pos()
{
    int pos,data,i;
    struct node *temp1=head,*nn;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the data: ");
    scanf("%d",&data);
    nn->data=data;
    nn->next=NULL;
    if(pos==0)
    {
        in_begg();
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp1=temp1->next;
            if(temp1==NULL)
            {
                printf("Postion not found");
            }
        }
        nn->next=temp1->next;
        temp1->next=nn;
    }
}
void del_pos()
{
    int pos,i;
    struct node *temp=head;
    printf("Enter the position: ");
    scanf("%d",&pos);
    if(pos==0)
    {
        del_begg();
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Postion not found");
            }
        }
        temp->next=temp->next->next;
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case(1):in_begg();
                    break;
            case(2):in_end();
                    break;
            case(3):in_pos();
                    break;
            case(4):del_begg();
                    break;
            case(5):del_end();
                    break;
            case(6):del_pos();
                    break;
            case(7):display();
                    break;
            case(8):create();
                    break;
        }
    }
}


