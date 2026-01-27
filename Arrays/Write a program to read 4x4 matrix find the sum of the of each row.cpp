//Write a program to read 4x4 matrix find the sum of the of each row
#include<stdio.h>
int main(){
	int a[4][4],i,j,r[4]={0};
	printf("Enter numbers for 4x4 matrix\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Enter for matrix[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 4x4 matrix is:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			r[i]=r[i]+a[i][j];
		}
		
	}
	for(i=0;i<4;i++){
		printf("The sum of r[%d] is:%d\n",i,r[i]);
	}
	
}
