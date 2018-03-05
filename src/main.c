#include <stdio.h>
#include <stdlib.h>
#include "memory_list.h"

#include "test.h"

int main(int argc, char ** argv){
	if (argc != 2){
		printf("Must have one input number.\n");
		return 0;
	}
	int inputNum = atoi(argv[1]);

	linkedNode_t * headNode = nodeConstructor(headNode);

	int * list = memAlloc(headNode, list, 10);
	list[1] = 34;

	printf("elem: %d\n", ((int*) (headNode->pointer))[1]);
	freeLinkedList(headNode);



	printf("last: %d\n", list[1]);
	return 0;
}
