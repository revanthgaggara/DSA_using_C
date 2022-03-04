#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* next;
    int data;
};
struct node *head[10];
int i;
void create()
{
    for(i=0;i<10;i++)
    {
        head[i]=NULL;
    }
}
void insert()
{
    int x,k;
    printf("Enter the data: ");
    scanf("%d",&x);
    struct node*nn=(struct node*)malloc(sizeof(struct node));
    nn->data=x;
    nn->next=NULL;
    k=x%10;
    struct node* temp=head[k];
    if(head[k]==NULL)
    {
        head[k]=nn;
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
void display()
{ 
    struct node* k;
    for(i=0;i<10;i++)
    {
        k=head[i];
        while(k!=NULL)
        {
            printf("%d\t",k->data);
            k=k->next;
        }
        if(k==NULL)
        {
            printf("NULL");
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    create();
    while(1)
    {
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case(1):insert();
                    break;
            case(2):display();
                    break;
        }
    }
}


