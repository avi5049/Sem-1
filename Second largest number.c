//Find the second largest number among three user input numbers.
 

#include <stdio.h>

void main (){
	int a,b,c;
	
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	printf("Enter value of c: ");
	scanf("%d",&c);
	
	
	if(a>b && b>c){
		printf("b is second largest number.");
	}
	
	if(b>a && a>c){
		printf("a is second largest number.");
	}
	
	if(a>c && c>b){
		printf("c is second largest number.");
	}
	
}

