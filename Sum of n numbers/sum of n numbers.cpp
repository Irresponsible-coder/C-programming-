#include<stdio.h>
int main(){
	int n,a,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		a = a+i;
	}
	printf("The sum of given %dth terms is:%d",n,a);
}
