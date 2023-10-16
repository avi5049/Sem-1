//Read 3 numbers, multiply largest number from first two numbers to third one using switch.

#include <stdio.h>

void main (){
	int a,b,c,max,r;
	
	printf("Enter a value of a: ");
	scanf("%d",&a);
	printf("Enter a value of b: ");
	scanf("%d",&b);
	printf("Enter a value of c: ");
	scanf("%d",&c);

	max=(a>b)?1:0;
	
	switch(max){
		case 1: r=a*c;
		printf("Result is %d",r);
		break;
		case 0: r=b*c;
		printf("Result is %d",r);
		break;
		
		
	}
	
}

