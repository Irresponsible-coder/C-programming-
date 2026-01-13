//WAP to enter 5 subjects marks and display total and average marks
#include<stdio.h>
int main(){
	int s[5];
	int i,n,after,total=0;
	float avg;
	printf("Enter the marks:");
	for(i=0;i<5;i++){
		scanf("%d",&s[i]);
	}
	printf("\n");

	for(i=0;i<5;i++){
		
		total = s[i]+total;
		}
	printf("The total marks is:%d\n",total);
	avg = total/5.0; 
	printf("The average is %.2f",avg);
			

}
