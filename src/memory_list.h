

typedef struct linkedNode {
	void * pointer;
	struct linkedNode * next;
} linkedNode_t;

linkedNode_t * nodeConstructor(linkedNode_t * node);

void * memAlloc(linkedNode_t * head, void * ptr, int size);

void freeLinkedList(linkedNode_t * head);

