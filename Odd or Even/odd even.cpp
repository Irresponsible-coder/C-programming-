#include<stdio.h>
int main (){
	int n,remainder; 
    printf("Enter a number:");
    scanf("%d", &n);
    remainder = n % 2;
    if (remainder == 0)
    {
    	printf("The number is even");
	}
    else{
    	printf("The number is odd");
	}
    
	return 0;
}
