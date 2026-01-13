#include<stdio.h>
int main(){
	int n,i,digit,reverseDigits=0;
	printf("Enter a number to reverse it:");
	scanf("%d",&n);
	for(i=n;i !=0 ;i=i/10){
		digit = i % 10;
		reverseDigits = reverseDigits * 10 + digit;
		
	}
	printf("The reversed number is %d",reverseDigits);
	if (n==reverseDigits){
		printf("\nThe number is palindrome");
	}else{
		printf("\nThe number is not palindrome");
	}
}
