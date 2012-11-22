// Find the only Pythagorean triplet, {a, b, c}, for which a + b + c = 1000.

#include <stdio.h>

int range = 1000;

int check (int a, int b, int c) {

	if (a + b + c > range) {
		return 0;
	}

	if (a >= b || b >= c || a >= c) {
		return 0;
	}

	if (a*a + b*b != c*c) {
		return 0;
	}

	return 1;
}

int main () {

	int a = 0, b = 0, c = 0;
	int product;

	while (a < range) {
		while (b < range) {
			c = range - a - b;
			if (check(a,b,c)) {
				printf("%i %i %i\n", a,b,c);
				product = a * b * c;
				printf("%i\n", product);
				break;
			}
			b++;
		}
		b = 1;
		a++;
	}

	return 0;
}