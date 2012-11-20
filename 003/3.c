// Find the largest prime factor of a composite number.

#include <stdio.h>

int main () {
	long urPrime = 600851475143;
	long prime = urPrime;
	long teiler = 1;

	while (teiler < urPrime) {
		if (prime % teiler == 0) {
			if (istPrime(teiler)) {
				printf("Primzahlteiler: %ld\n", teiler);
				prime /= teiler;
			}
		}
		teiler++;
	}
	return 0;
}

int istPrime (long zahl) {
	int i = 2;
	while (i < zahl) {

		if (zahl % i == 0) {
			return 0;
		}
		i++;
	}
	return 1;
}