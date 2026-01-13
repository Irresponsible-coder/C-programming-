#include<stdio.h>
#include<math.h>
int main(){
	int n,a=1,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
     	a = pow(i,2);
     	printf("%d,",a);
	}
}
