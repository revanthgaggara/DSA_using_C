#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*first,*last;
    int data;
};
void create();
void in_begg();
void in_end();
void in_pos();
void del_begg();
void del_end();
void del_pos();
void display();
struct node*head=NULL;
int i;
void create()
{
    int data;
    struct node*nn,*temp=head;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&data);
    nn->data=data;
    nn->first=NULL;
    nn->last=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        while(temp->last!=NULL)
        {
            temp=temp->last;
        }
        nn->first=temp;
        temp->last=nn;
    }
}
void in_begg()
{
    int data;
    struct node*nn,*temp;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data at begg: ");
    scanf("%d",&data);
    nn->data=data;
    nn->first=NULL;
    nn->last=head;
    head->first=nn;
    head=nn;
}
void in_end()
{
    int data;
    struct node*nn,*temp=head;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data at end: ");
    scanf("%d",&data);
    nn->data=data;
    nn->last=NULL;
    while(temp->last!=NULL)
    {
        temp=temp->last;
    }
    temp->last=nn;
    nn->first=temp;
}
void del_begg()
{
    struct node *temp=head;
    head=temp->last;
}
void del_end()
{
    struct node *temp=head;
    while(temp->last->last!=NULL)
    {
        temp=temp->last;
    }
    temp->last=NULL;
}
void display()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->last;
    }
    printf("\n");
}
void in_pos()
{
    int data,pos,i;
    struct node*nn,*temp=head;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&data);
    printf("Enter the position: ");
    scanf("%d",&pos);
    nn->data=data;
    nn->last=NULL;
    nn->first=NULL;
    for(i=0;i<pos-1;i++)
    {
        temp=temp->last;
        if(temp=NULL)
        {
            printf("Position not found");
            return;
        }
    }
    nn->first=temp;
    nn->last=temp->last;
    temp->last->first=nn;
    temp->last=nn;
}
void del_pos()
{
    int pos;
    struct node *temp=head;
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(i=0;i<pos-1;i++)
    {
        temp=temp->last;
        if(temp==NULL)
        {
            printf("Position not found");
            return;
        }
    }
    temp->last->first=temp;
    temp->last=temp->last->last;
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
            case(3):del_begg();
                    break;
            case(4):del_end();
                    break;
            case(5):in_pos();
                    break;
            case(6):del_pos();
                    break;
            case(7):create();
                    break;
            case(8):display();
                    break;
        }
    }
}

