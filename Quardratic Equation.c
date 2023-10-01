//Determine roots of equation ax^2+bx+c=0


#include <stdio.h>
#include <math.h>

void main (){
	float a,b,c,r1,r2;
	
	printf("Equation is ax^2+bx+c=0 \nEnter value of a,b,c respectively");
	scanf("%f %f %f",&a,&b,&c);
	
	if(b*b>=4*a*c){
	
	r1=(((-b)+sqrt(b*b-4*a*c))/(2*a));
	r2=(((-b)-sqrt(b*b-4*a*c))/(2*a));
	
	printf("Roots of the equation are %f %f",r1 ,r2);
	
	}
	
	else{
		printf("Roots of the equation are imaginary.");
	}
}

