#include<stdio.h>
#include<conio.h> // conio.h library is needed
int main(){
	char name[20];
gets(name);      // reads a full string

char ch;
ch = getchar();  // reads a single character
puts(name);
printf("%c",ch); //same as putch(ch)
putch(ch);

}
