#include "memory_list.h"
#include <stdlib.h>

linkedNode_t * nodeConstructor(linkedNode_t * node){
	node = realloc(node, sizeof(linkedNode_t));
	node->pointer = NULL;
	node->next = NULL;
	return node;
}

void * memAlloc(linkedNode_t * head, void * ptr, int size){
	ptr = realloc(ptr, sizeof(size) * size);
	linkedNode_t * end = head;
	while (end->next != NULL){
		end = end->next; //Find the final node in list.
	}
	end->pointer = ptr; //Append to 'free' list.
	end->next = nodeConstructor(end->next);
	return ptr;
}

void freeLinkedList(linkedNode_t * head){
	while (head != NULL){
		//*(head->pointer) = NULL;
		linkedNode_t * temp = head->next;
		free(head->pointer);
		free(head);
		head = temp;
//		printf("Freed an element.\n");
	}
}

