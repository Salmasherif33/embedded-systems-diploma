#include <stdio.h>
#include <ctype.h>

int main (){

	int in;

	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);

	scanf("%d",&in);

	int i,sum = 0;
	for(i = 1; i <= in; i++){
		sum+=i;
	}
	printf("Sum = %d",sum);
	return 0;
}
