//swap two numbers using variable


#include <stdio.h>

void main (){
	int a,b;
	printf("Enter integer value a:");
	scanf("%d",&a);
	
	printf("Enter iteger value b:");
	scanf("%d",&b);
	
	b=a+b,a=b-a,b=b-a;
	
	printf("Swaped number is %d%d",a,b);
	
}

