//WAP to enter m x n matrix to user and check if its identity matrix or not? 
#include<stdio.h>
int main(){
	int i,j,m,n,a[100][100];
	bool isIdentity=true;
	printf("Enter a size of matrix for row and column respectively:");
	scanf("%d%d",&m,&n);
	if(m!=n){
		printf("The matrix is invalid for to be identity so not identity matrix try to put same size for both row and column");
	}else{
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the value for [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("The matrix:\n");
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==j && a[i][j]!=1){
				isIdentity=false;
				
			}else if(i!=j &&a[i][j]!=0){
				isIdentity=false;
			}
		}
	}
	if(isIdentity){
		printf("The matrix is identity matrix");
	}else{
		printf("The matrix is not identity matrix");
	}
	
		
	}
	
	
	
	}
	
	

