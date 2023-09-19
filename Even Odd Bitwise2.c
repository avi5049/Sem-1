//Odd or even using bitwise operator


#include <stdio.h>

void main (){
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	if(n&1==1){
		printf("Given number is odd.");
	}
	
	else{
		printf("Given number is even.");
	}
}

