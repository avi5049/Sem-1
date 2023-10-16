//Check whether character is alphabet or not

#include <stdio.h>

void main (){
	char c,ch;
	printf("Enter any character: ");
	scanf("%c",&c);
	
	ch=(c>=65 && c<=90  || c>=97 && c<=122)?printf("Given character is alphabet"):printf("Given character is not alphabet");

}

