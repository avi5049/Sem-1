//Q:Print temperature from farenheit to celsius
// C=(f-32)*5/9

#include <stdio.h>

void main (){
	float f,c;
	printf("Enter temperature in farenheit: ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	
	printf("Given temperature in Celsius is %f",c);

}

