//Perform Addition,Subtraction,Multiplication,Division as per user's choice using switch


#include <stdio.h>

void main (){
	float a,b,add,sub,div,mul;
	char c;
	printf("Enter a choice from following: \n+.Addition -.Subrtraction *.Multiplication /.Division\n");
	scanf("%c",&c);
	
	printf("Enter value of a: ");
	scanf("%f",&a);
	
	printf("Enter value of b: ");
	scanf("%f",&b);

		
	switch(c){
		case '+': add=a+b;
				printf("Addition of given numbers is %f",add);
				break;
		case '-': sub=a-b;
				printf("Subtraction of given numbers is %f",sub);
				break;
		case '*': mul=a*b;
				printf("Multiplication of given numbers is %f",mul);
				break;
		case '/': div=a/b;
				printf("Division of given numbers is %f",div);
				break;
		default: printf("Enter a valid value of c.");
				break;
	}
	
	

}

