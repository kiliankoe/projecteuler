// Find the 10001st prime.

#include <stdio.h>

int main () {

	int range = 10001;
	int prime;
	int i = 2;
	int p = 0;

	while (p < range) {
		if (isPrime(i)) {
			prime = i;
			p++;
		}
		i++;
	}
	printf("%i. Primzahl: %i\n", range, prime);

	return 0;
}

int j;


//Nur mal so als Anmerkung, warum kann ich vorher schon auf isPrime() zugreifen? Bisher ist dem Compiler diese Funktion eigentlich nicht bekannt...
int isPrime (int zahl) {
	j = 2;
	while (j < zahl) {
		if (zahl % j == 0) {
			return 0;
		}
		j++;
	}
	return 1;
}