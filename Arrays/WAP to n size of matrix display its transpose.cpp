//WAP to n size of matrix display its transpose
#include<stdio.h>
int main(){
	int m,n,i,j,matA[50][50];
	printf("Enter the size of matrix row and column:");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter matA[%d][%d]:",i,j);
			scanf("%d",&matA[i][j]);
		}
	}
	printf("Orignal Matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",matA[i][j]);
		}
		printf("\n");
	}
	
	printf("The transpose of the matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d \t",matA[j][i]);
		}
		printf("\n");
	}
	
}
