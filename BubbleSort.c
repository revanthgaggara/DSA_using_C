#include<stdio.h>
void main()
{
	int a[30],i,j,temp=0,n;
	printf("Enter the no of elements you want to enter: ");
	scanf("%d",&n);
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n-1;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            temp=a[j+1];
	            a[j+1]=a[j];
	            a[j]=temp;
	        }
	    }
	}
  printf("The elements after Bubble sort are: \n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
}
