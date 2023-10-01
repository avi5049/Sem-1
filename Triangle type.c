//check type of triangle


#include <stdio.h>

void main (){
	float a,b,c;
	printf("Enter value of side a: ");
	scanf("%f",&a);
	
	printf("\nEnter value of side b: ");
	scanf("%f",&b);

	printf("\nEnter value of side c: ");
	scanf("%f",&c);
	
	if(a==b && b==c && c==a){
		printf("Triangle is Equilateral.");
	}
	
	else if(a==b || b==c || c==a){
		if(a*a+b*b==c*c){
			printf("Triangle is Right Angled Triangle as well as Isosceles.");
		}
		else{
			printf("Triangle is Isosceles.");
		}
	}
	
	else if(a!=b && b!=c && c!=a){
		if(a*a+b*b==c*c){
			printf("Triangle is Right Angled Triangle as well as Scalene.");
		}
		else{
			printf("Triangle is Scalene.");
		}
	}
	
	
	}

