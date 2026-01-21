// Program to enter and display values in 2*3 matrix 
#include<stdio.h>
int main()
{
	int i,j, mat[2][3];
	printf("Enter the values in matrix");
	for(i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("Enter mat [%d][%d] \n",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The values of matrix are \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}
