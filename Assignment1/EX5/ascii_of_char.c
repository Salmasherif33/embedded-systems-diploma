#include <stdio.h>

int main (){
	printf("##########Console-output###\n");

	char input;
	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c", &input);


	printf("ASCII Value of %c = %d\n",input, input);

	printf("###########################");

	return 0;
}
