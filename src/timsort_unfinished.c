// #include <stdio.h>

#define LENGTH 10
#define I_LENGTH 6
#define J_LENGTH 4


int result[LENGTH];
int next = 0;

void insert(int value){
	result[next] = value; 
	next++;
}

void bulk_insert(int * list, int start, int stop){
	for (int i = start; i < stop; i++){
		insert(list[i]);
	}
}


int main(){
	printf("Initiated main.\n");
	
	int list_i[I_LENGTH] = {4, 6, 7, 9, 10, 11}; //{4, 6, 7, 9};
	int list_j[J_LENGTH] = {1, 2, 5, 8};
	
	int i_holder = 0;
	int j_holder = 0;
	int stopp = 0;
	for (int i = 0; i < I_LENGTH; i++){
		for (int j = j_holder; j < J_LENGTH; j++){
/*			if ( (list_i[i] < list_j[j]) || (j_holder >= J_LENGTH -1) ){
				printf("Found something. (%d,%d). \n", i, j);
				bulk_insert(list_j, j_holder, j); 
				j_holder = j;
				insert(list_i[i]);
				break; 
			}*/
			if ( (list_i[i] < list_j[j]) ){
				printf("Found something. (%d,%d). \n", i, j);
				bulk_insert(list_j, j_holder, j);
				j_holder = j;
				insert(list_i[i]);
				break; 
			}
			else if ((j_holder >= J_LENGTH -1)) {
				printf("Found something2. (%d,%d). \n", i, j);
				if(!stopp){
					bulk_insert(list_j, j_holder, j+1); 
					stopp = 1;
				}
				insert(list_i[i]);
				break; 
			}
			else {
				printf("Found nothing. (%d,%d). \n", i, j);
			}
		}
	}
	bulk_insert(list_j, j_holder, J_LENGTH);
	printf("\n");
	
	printf("{");
	for (int i = 0; i < LENGTH; i++){
		printf(" %d ", result[i]);
		// printf(" %d ", rand());
	}
	printf("}\n");
	
	return 0;
}




