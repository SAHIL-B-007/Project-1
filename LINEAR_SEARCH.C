#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,j,key,found=0,index;

	clrscr();

	for(i=0;i<=9;i++)
	{
		printf("\n\t\t\tEnter %d number : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\n\t\t\tEnter key to search in array : ");
	scanf("%d",&key);

	for(i=0;i<=9;i++)
	{
	}

	if(found==1)
	printf("\n\n\t\t\t%d found at location : %d",key,index);
	else
	printf("\n\n\t\t\t%d is not available in array",key);

	getch();

}