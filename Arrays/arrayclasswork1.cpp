//WAP to enter 10 numbers in array and also enter a number 
//and find whether a given number is in array or not.
#include<stdio.h>
int main(){
	int a[10];
	int i,n,after;
	printf("Enter the values:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter a number to check if it is inside the array or not");
	scanf("%d",&after);
	for(i=0;i<10;i++){
		
		if(a[i] == after){
			printf("The number %d is already there",after);
		}
		}

}
