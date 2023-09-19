//Find out largest number from given 3 numbers using conditional operator.

#include <stdio.h>

void main (){
	int a,b,c,Max;
	printf("Enter a value of a: ");
	scanf("%d",&a);
	printf("Enter a value of b: ");
	scanf("%d",&b);
	printf("Enter a value of c: ");
	scanf("%d",&c);
	
	Max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest number is %d ",Max);
	
}

