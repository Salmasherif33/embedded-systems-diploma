#include <stdio.h>

int main (){

	float in;

	printf("Enter a number: ");
	fflush(stdout); fflush(stdin);

	scanf("%f",&in);

	if(in > 0)
		printf("%0.2f is positive", in);
	else if(in < 0)
		printf("%0.2f is negative", in);
	else
		printf("You entered 0");
	return 0;
}
