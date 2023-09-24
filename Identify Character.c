//check whether given character is upper case, lower case, digit or special character


#include <stdio.h>

void main (){
	char a;
	printf("Enter any character: ");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z'){
		printf("Given character is Upper case.");
		
	}
	else if(a>='a' && a<='z'){
		printf("Given character is small case.");
		
	}
	else if(a>='0' && a<='9'){
		printf("Given character is digit.");
		
	}
	else{
		printf("Given character is special character.");
		
	}
	
}

