#include<stdio.h>
int main(){
	int n,a=1,i;
	printf("Enter a number for factorial:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		a = a*i;
	}
	printf("The factorial of given number is:%d",a);
}
