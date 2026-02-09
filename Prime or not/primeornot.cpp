#include<stdio.h>
#include<stdbool.h>
int main(){
	int n,i,b;bool isPrime=true;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<=1){
		printf("The given number %d is not a prime number",n);
		return 0;
	}
	
	for (i=2;i<n;i++){
		b = n%i;
		if(b == 0){
		isPrime= false;
		}
	}
	if(isPrime){
		printf("The given number %d is a prime number",n);
	}else{
		printf("The given number %d is not prime number",n);
	}
	
		
     	
	}

