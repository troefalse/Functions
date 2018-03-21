#include <stdio.h>
#include <stdlib.h>
#include "memory_list.h"
#include "print.h"
#include "primes.h"

#define LIST_EXTENSION_LENGTH 10

int main(int argc, char ** argv){
	if (argc != 2){
		printf("Must have one input number.\n");
		return 0;
	}
	int inputNum = atoi(argv[1]);

	linkedNode_t * headNode = nodeConstructor(headNode);

	int * primenumbers = memAlloc(headNode, primenumbers, LIST_EXTENSION_LENGTH);
	int length = prime_generator(primenumbers, inputNum);

//	printf("elem: %d\n", ((int*) (headNode->pointer))[1]);
	print_list(primenumbers, length);




	freeLinkedList(headNode);

//	printf("last: %d\n", primenumbers[1]);
	return 0;
}
