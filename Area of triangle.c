//Q: Print Area of Triangle

#include <stdio.h>

void main (){
	float h,b,A;
	printf("Enter Height of triangle:");
	scanf("%f",&h);
	
	printf("\nEnter Base of triangle:");
	scanf("%f",&b);
	A=0.5*h*b;
	
	printf("Area of Triangle is %f",A);
}
