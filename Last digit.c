//check whether a last number of given integer is odd or even


#include <stdio.h>

void main (){
	int a,l;
	printf("Enter an long integer value: ");
	scanf("%d",&a);
	
	l=a%10;
	
	if(l%2==0){
		printf("Last digit of given number is even.");
		
	}
	else{
		printf("Last digit of given number is odd.");
	}
}

