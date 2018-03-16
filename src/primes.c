#include <stdio.h>
#include <math.h>
//#include "memory_list.h"

#define MAXIMUM_INPUT 100 //todo: take as function input. 
#define LIST_LENGTH MAXIMUM_INPUT/2 //todo: dynamic reallocate length. 
#define LIST_APPEND_LENGTH 10



void append_if_prime(int primecandidate, int * primelist, int * length, int sqindex){
	//Adds candidate to the end of list if it is a prime number. Needs sorted list of primes with '2' as first element. Skip comparison with first element '2', as input candidates should be odd numbers. 
	for (int i=1; i<(sqindex); i++){
		if ((primecandidate % primelist[i] == 0)){
			//Is not a prime.
			return;
		}
	}
	//Is a prime. 
	primelist[(*length)] = primecandidate;
	(*length)++;
//	if ( (*length) > noe ){
//		realloc LIST_APPEND_LENGTH
//	}
}



int prime_generator(int * primenumbers, int highestCandidate){
	// Generates list of consequtive prime numbers from 2 to input.

	//Assert user input.
	if(highestCandidate<2){
		printf("Too short list.\n");
		return 0;
	}

	//Initialize variables. 
//	int * primenumbers = mem_alloc(primenumbers, LIST_LENGTH];
	int current_length = 1; //List contains one element. 
	int high_value = 4; 	//First prime squared. 
	int high_index = 1; 	//Inner for-loop end point. Points to sqrt(high_value)+1. Used because any not-prime number can be represented as a product of primes. 
	primenumbers[0] = 2;	//Insert first prime. 

	//Insert following primes up to maximum. 
	for(int candidate=3; candidate<highestCandidate; candidate+=2){
		if (candidate > high_value){
			high_value = (primenumbers[high_index]) * (primenumbers[high_index]);
			high_index++;
		}
		append_if_prime(candidate, primenumbers, &current_length, high_index);
	}

	printf("Found %d prime numbers: \n", current_length);

	return current_length;
//	return primenumbers;
}



// printf("candidate = %d, high_value = %d, high_index = %d, list = %d \n", candidate, high_value, high_index, primenumbers[high_index]);


//TODO:
//skip scanning of odd numbers ending with 5. 
//Compare timing of: One-function. Two-functions. Naive. Simple "guess" stop (append_if_prime). Sqrt stop. Squared stop (quick_append_if_prime). Dynamic list length reallocation (one at a time). Dynamic list length reallocation (several at a time). 

