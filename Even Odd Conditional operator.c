//Check whether number is even number or odd number using conditional operator.


#include <stdio.h>

void main (){
	int a,r;
	printf("Enter a  value for a: ");
	scanf("%d",&a);
	
	r=(a%2==0)?printf("a is even number"):printf("a is odd number");
		
}

