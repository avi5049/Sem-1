//Print 1 to n using  do while loop 

#include <stdio.h>

void main (){
	int n,i=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	do{
		printf("\n%d",i);
		i++;
	}
	while(i<=n);
}

