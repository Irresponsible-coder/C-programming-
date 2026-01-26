#include<stdio.h>
int main(){
	int i,j,k=0,arr[10],smallTemp;
	printf("Enter the numbers in array of size 10:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		
		for(j=i+1;j<10;j++){
			if(arr[i]<arr[j]){
				smallTemp = arr[i];
				arr[i]=arr[j];
				arr[j]=smallTemp;
				
			}
		}
		
	}
	printf("The numbers in descending order are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d \t",arr[i]);
	}

}
