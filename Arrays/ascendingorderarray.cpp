// WAP to enter 10 numbers in array and display them in ascending order:
#include<stdio.h>
int main()
{
	int a[10],i,j,bigTemp;
	printf("Enter the numbers in array of size 10:");
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				bigTemp=a[i];
				a[i]=a[j];
				a[j]=bigTemp;
			}
		}
	}
	printf("The numbers in ascending order are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d \t",a[i]);
	}

}
