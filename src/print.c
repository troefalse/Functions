#include <stdio.h>

void print_list(int * list, int length){
	printf("{ ");
	for (int i=0;i<length;i++){
		printf("%d ", list[i]);
	}
	printf("}\n");
}


