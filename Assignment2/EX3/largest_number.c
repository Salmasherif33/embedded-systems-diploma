#include <stdio.h>
#define SIZE 3

int main (){

	float array [SIZE];

	printf("Enter three numbers: ");
	fflush(stdout); fflush(stdin);

	for(int i = 0; i < SIZE; i++)
		scanf("%f",&array[i]);

	float max = array[0];
	for(int i = 1; i < SIZE; i++){
		if(array[i] > max)
			max = array[i];
	}
	printf("Largest number = %0.2f", max);
	return 0;
}
