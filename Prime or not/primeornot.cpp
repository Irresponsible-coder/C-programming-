#include<stdio.h>
int main(){
	int n,i,b;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<=1){
		printf("The given number %d is not a prime number",n);
	}
	
	for (i=2;i<n;i++){
		b = n%i;
		if(b == 0){
		printf("The given number %d is not a prime number ",n);
		return 0;
		}
	}
	printf("The given number %d is a prime number",n);
		
     	
	}

