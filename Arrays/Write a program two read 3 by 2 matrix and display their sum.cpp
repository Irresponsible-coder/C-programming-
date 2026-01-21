//Write a program two read 3 by 2 matrix and display their sum
#include<stdio.h>
int main()
{
	int i,j, matA[3][2],matB[3][2],sum[3][2];
	printf("Enter the values in matrix");
	for(i=0;i<3;i++){
		for (j=0;j<2;j++){
			printf("Enter matA[%d][%d] \n",i,j);
			scanf("%d",&matA[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for (j=0;j<2;j++){
			printf("Enter matB[%d][%d] \n",i,j);
			scanf("%d",&matB[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for (j=0;j<2;j++){
			sum[i][j]= matA[i][j] + matB[i][j];
		}
		
	}
	printf("The sum of the matrix is:\n");
	for(i=0;i<3;i++){
		
		for (j=0;j<2;j++){
			printf("%d\t",sum[i][j]);
			
		
		}
		printf("\n");
	}
}
