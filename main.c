#include "main.h"

int myArray[5];

void printValue(int *value) {
	printf("%d\n", *value);
}

void changeValue(int *value){
	*value += 10;
}

int doForAllInArray(int array[], void (*function)(int*)){
	int len = ARRAY_SIZE(myArray);

	for (size_t i = 0; i < len; i++)
		(*function) (&(array[i]));

	return 1;
}

int main(int argc, char const *argv[]) {
	doForAllInArray(myArray, changeValue);
	doForAllInArray(myArray, printValue);
}