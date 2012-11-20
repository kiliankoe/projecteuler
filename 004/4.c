// Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>

int main () {

	int range = 99;

	int a = range;
	int b = range;
	int reset = range;
	int palim; // Mir ist schon klar, dass es nicht paliMdrom heißt^^ ist ein Witz meinerseits 
	int maxPalim;

	while (1) {
		palim = a * b;
		if (isPalim(palim)) {
			if (maxPalim < palim) {
				maxPalim = palim;
				printf("%i\n", maxPalim);
			}
		}

		if (b > 1) {
			b--;
		} else {
			b = reset;
			a--;
		}

		if (a < 1) {
			break;
		}
	}

	return 0;
}

int isPalim (int orig) {
	int rev = 0;
	int zahl = orig;

	while (zahl > 1) {
		rev = rev * 10 + zahl % 10;
		zahl /= 10;
	}

	if (rev == orig) {
		return 1;
	} else {
		return 0;
	}
}