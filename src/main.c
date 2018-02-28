#include <stdio.h>
#include <stdlib.h>

#include "test.h"



int main(int argc, char ** argv){
	if (argc != 2){
		printf("Only one input allowed.\n");
		return 0;
	}
	int inputNum = atoi(argv[1]);



	printf("last: %d\n", hei(3));
	return 0;
}
