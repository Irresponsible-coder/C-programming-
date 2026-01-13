#include<stdio.h>// WAP factorial for do while and while
int main(){
	int n,f=1,i=1;
	printf("Enter a number for a factorial");
	scanf("%d",n);
	do {
		f=f*i;
		i++;
	}while (i<n);
	printf("The factorial of given number is: %d",f);
	f= 1; 
	i=1;
	printf("Enter a number for a factorial");
	scanf("%d",n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("The factorial of given number is: %d",f);
}
