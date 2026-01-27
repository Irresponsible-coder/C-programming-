#include<stdio.h>
int main(){
	int i,a[4],big;
	printf("Enter 4 numbers:");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=0;i<4;i++){
		if(a[i]>big){
			big = a[i];
		}
	}
	printf("The greatest number among four numbers is:%d",big);
}
