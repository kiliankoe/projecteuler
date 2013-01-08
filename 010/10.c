// Calculate the sum of all the primes below two million.

// 1 Minute und 6 Sekunden, NOT GOOD ENOUGH!!11!1!!elf

#include <stdio.h>

int isPrime (int zahl);
int k = 0;
int j[1000000];
int x;
int q;

int main () {

	int range = 2000000;
	long sum = 10;

	int z = 0;
	while (z <= 1000000) {
		j[z] = 0;
		z += 1;
	}

	j[0] = 2; 

	for (int i = 3; i < range; i=i+2) {

		if (i % 3 != 0) {
			if (i % 5 != 0) {
				if (isPrime(i)) {
					sum += i;
					//printf("i: %i Summe: %ld\n", i,sum);
				}
			}
		}
	}

	// for (int i = 0; i < 10; i++) {
	// 	printf("j[%i] = %i Summe: %ld\n", i,j[i],sum);
	// }

	printf("Summe: %ld\n",sum);
	return 0;
}

int isPrime (int zahl) {
	x = j[0];
	q = 0;
	while (x != 0) {
		if (zahl % x == 0) {
			//printf("false\n");
			return 0;
		}
		q += 1;
		x = j[q];
	} 
	j[q] = zahl;
	return 1;
}