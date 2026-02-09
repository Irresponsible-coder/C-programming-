#include<stdio.h>
int main(){
	int n,i;
	bool isPrime=true;
	printf("Prime number till 100:");

	for(n=2;n<100;n++){
		isPrime = true;
		for (i=2;i<n;i++){
		if(n%i == 0){
		isPrime= false;
		break;
		}
		
	}
	if(isPrime){
		printf("%d ",n);
	}
	
	}
	
	
	
		
     	
	}

