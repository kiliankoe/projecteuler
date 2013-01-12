// What is the value of the first triangle number to have over five hundred divisors?

#include <stdio.h>

int main () {

	int range = 7;
	int counter = 0;
	int sum = 0;


	while (true) {

		for (int i = 0; i <= range; i++) {
			sum += i;
		}
		printf("%i: %i,", range,sum);


		for (int i = 1; i <= sum+1; i++) {
			if (sum % i == 0) {
				counter++;
			}
		}
		printf("%i\n", counter);

		if (counter > 500) {
			break;
		}

		range++;
	}


	return 0;
}