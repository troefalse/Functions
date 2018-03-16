
//Adds candidate to the end of list if it is a prime number. Needs sorted list of primes with '2' as first element. Skip comparison with first element '2', as input candidates should be odd numbers. 
void append_if_prime(int primecandidate, int * primelist, int * length, int sqindex);


// Generates list of consequtive prime numbers from 2 to input.
int prime_generator(int * primenumbers, int highestCandidate);


