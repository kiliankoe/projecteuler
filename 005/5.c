// What is the smallest number divisible by each of the numbers 1 to 20?

#include <stdio.h>

int main () {

	int num = 1;
	int i = 1;
	int range = 20;
	int counter = 0;

	while (1) {
		if (num % i == 0) {
			counter++;
		}

		i++;

		if (i > range) {
			i = 1;
			num++;
			counter = 0;
		}

		if (counter == (range - 1)) {
			printf("%i\n", num);
			break;
		}
	}

	return 0;
}
