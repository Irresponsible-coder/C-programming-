#include<stdio.h>
int main (){
	int m,a,b,o;
	printf("Simple Calculator");
	printf("\n 1:Addition \n 2:Subtraction \n 3:Multplication /n Enter your choice(1-3):");
	scanf("%d", &m);
	switch (m){
	case 1 : 
	printf("This is addition \n Now enter two numbers:");
	scanf("%d %d",&a,&b);
	o = a + b;
	printf("\n The addition is: %d",o);
	break;
	case 2 :
	printf("This is subtraction \n Now enter two numbers:");
	scanf("%d %d",&a,&b);
    o = a-b;
    printf("\n The subtraction is:%d",o);
	break;
	case 3 :
	printf("This is multiplication \n Now enter two numbers:");
	scanf("%d %d",&a,&b);
	o = a*b;
	printf("\n The multiplication is:%d",o);
	break;
	default: 
	printf("Invalid choice");
	}
}

