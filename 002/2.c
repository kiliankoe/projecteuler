// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <stdio.h>

int main () {
	int i = 1;
	int fib1, fib2, hilfs;
	int sum;
	fib1 = 1;
	fib2 = 2;

	while (i) {
		if (fib1 % 2 == 0){
			sum += fib1;
		}
		printf("%i %i %i\n", i, fib1, sum);
		hilfs = fib1 + fib2;
		fib1 = fib2;
		fib2 = hilfs;
		if (fib1 > 4000000) {
			i = 0;
		}
	}
	printf("Summe ist: %i\n", sum);
	return 0;
}