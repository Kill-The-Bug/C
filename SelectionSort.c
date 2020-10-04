#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,j,n,temp,min,pos;
	clrscr();
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;

	}

	for(i=0;i<n;i++)
		printf("%d",a[i]);
	getch();
}
