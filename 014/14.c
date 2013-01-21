// Which starting number, under one million, produces the longest chain?

#include <stdio.h>

long int start;
long int counter;
long int maxcounter;
long int max;

long int isEven (long int zahl) {

	counter++;
	zahl = zahl / 2;
	return zahl;

}

long int isOdd (long int zahl) {

	counter++;
	zahl = 3 * zahl + 1;
	return zahl;

}

int main () {

	for (int i = 1; i <= 1000000; i++) {
		counter = 0;
		start = i;
		while (true) {
			if (start % 2 == 0) {
				start = isEven(start);
			} else {
				start = isOdd(start);
			}
			if (start <= 1) {
				break;
			}
		}

		if (counter > maxcounter) {
			maxcounter = counter;
			max = i;
			printf("%ld mit counter = %ld\n", max,maxcounter);
		}
	}

	return 0;
}