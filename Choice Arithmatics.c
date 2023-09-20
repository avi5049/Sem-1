//Addition,Subtraction,Multiplication,Division of 2 given numbers

#include <stdio.h>

void main (){
	int choice;
	float a,b,add,sub,mul,div;
	printf("Enter two values a and b:");
	scanf("%f %f",&a,&b);
	printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division");
	printf("\nEnter any choice from above mentioned");
	scanf("%d",&choice);
	
	if(choice==1)
	{ 
	  add=a+b;
	  printf("Addition of given numbers=%f",add);
	  
	  
	}
	else if(choice==2){
		sub=a-b;
		printf("Subtraction of given numbers is=%f",sub);
		
	}
	else if(choice==3){
		mul=a*b;
		printf("Multiplication of given numbers is=%f",mul);
		
	}
	else if(choice==4){
		div=a/b;
		printf("Division of given numbers is=%f",div);
		
	}
	else {
		printf("Enter a valid choice");
	}
}

