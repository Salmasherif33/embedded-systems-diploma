#include <stdio.h>

int main (){
	printf("##########Console-output###\n");

	float a,b;
	printf("Enter value of a: \n");
	fflush(stdout); fflush(stdin);
	scanf("%f", &a);
	printf("Enter value of b: \n");
	fflush(stdout); fflush(stdin);
	scanf("%f", &b);
	//a=5 , b = 10
	b = a+b; //b= 15
	a = b-a; //a =10
	b= b- a; //b = 5


	/*	searching for how to print it with the same decimal point entered*/

	printf("After swapping,value of a = %0.2f\n",a);
	printf("After swapping,value of b = %0.2f\n",b);

	printf("###########################");

	return 0;
}
