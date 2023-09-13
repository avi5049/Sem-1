#include <stdio.h>

void main (){
	int a=5,b=10,c=0;
	c=!(a++&&++b) || c++;
	printf("%d %d %d",a,b,c);

}

