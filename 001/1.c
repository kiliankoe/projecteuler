// Add all the natural numbers below one thousand that are multiples of 3 or 5.

#include <stdio.h>

int main () {
	int sum = 0;
	int i = 0;
	while (i < 1000) {
		if (i % 3 == 0 || i % 5 == 0) {
			if (i % 3 == 0 && i % 5 == 0) {
				sum += i;
			} else {
				sum += i;
			}
		}
		i++;
		printf("Summe ist: %i\n", sum);
	}
}