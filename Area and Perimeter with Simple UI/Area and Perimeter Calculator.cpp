// Area and perimeter Calculator 
// 1.Area of rectangle 
//2. Perimeter of rectangle
// 3. Area of circle 
//4. Perimeter of circle
//Enter your choice
#include<stdio.h>
#include<math.h>
int main (){
	int m,l,b,o;
	float r, pi = (float)22/7;// this '(float)' called type cating that changes the dividing values 22/7 from integer to float
	printf("Area and Perimeter Calculator");
	printf("\n 1.Area of rectangle \n 2.Perimeter of rectangle \n 3.Area of circle \n 4. Perimeter of circle \n Enter your choice(1-4):");
	scanf("%d", &m);
	switch (m){
	case 1 : 
	printf("This is Area of rectangle \n Now enter length and breadth:");
	scanf("%d %d",&l,&b);
	o = l*b;
	printf("\n The area of rectangle is: %d",o);
	break;
	case 2 :
	printf("This is Perimeter \n Now enter length and breadth:");
	scanf("%d %d",&l,&b);
    o = 2 *(l + b);
    printf("\n The Perimeter is:%d",o);
	break;
	case 3 :
	printf("This is Area of circle \n Now enter the radius:");
	scanf("%f",&r);
	printf("\n Area of circle is:%.2f",pow(r,2) * pi );
	break;
	case 4 :
	printf("This is Perimeter of circle \n Now enter the radius:");
	scanf("%f",&r);
	printf("\n Perimeter of circle :%.2f",r * 2 * pi);
	break;
	default: 
	printf("Invalid choice");
	}
}
