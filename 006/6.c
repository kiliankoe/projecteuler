// What is the difference between the sum of the squares and the square of the sums?

#include <stdio.h>

int main () {

	int range = 100;
	int sum = 0; // Warum beginnt die sum sonst bei 1551883176?!
	int sumsq = 0;
	int diff;
	int i = 1;
	int helper;

	while (i < range + 1) {
		helper = i * i;
		sum += helper;
		i++;
	}
	printf("sum: %i\n", sum);

	i = 1;
	helper = 0;

	while (i < range + 1) {
		helper += i;
		i++;
	}
	sumsq = helper * helper;
	printf("sumsq: %i\n", sumsq);

	diff = sumsq - sum;
	printf("diff: %i\n", diff);

	return 0;
}