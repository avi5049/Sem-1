//Q:Print simple interest

#include <stdio.h>

void main (){
	float p,roi,t,SI;
	printf("Enter Principle Amount: ");
	scanf("%f",&p);
	
	printf("Enter Rate of Interest: ");
	scanf("%f",&roi);
	
	printf("Enter Time Period: ");
	scanf("%f",&t);
	SI=(p*roi*t)/100;
	
	printf("Simple Interest is %f",SI);
	
     
}

