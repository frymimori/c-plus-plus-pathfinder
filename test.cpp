#include <cstdio>
#include "pathfinder.hpp"
using namespace pathfinder;

int main(void) {
	unsigned long a = 15;
	unsigned long b = 11;
	unsigned long c = 0;
	unsigned long d;
	unsigned char e[165] = {
		1, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 4, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 4, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 0, 4, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 0, 4, 0, 0,
		0, 0, 0, 7, 7, 7, 0, 7, 4, 0, 0,
		0, 0, 0, 7, 0, 7, 7, 7, 4, 0, 0,
		0, 0, 0, 7, 0, 7, 0, 4, 0, 0, 0,
		0, 7, 7, 7, 7, 7, 4, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
		7, 7, 7, 7, 7, 4, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
		0, 2, 4, 4, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};
	d = pathfinder::A(a, b, e);
	a *= b;
	printf("%u ", e[c]);
	c++;

	if (a == d) {
		d = 0;
	}

	while (a != c) {
		printf("%u ", e[c]);

		if ((c + 1) % b == 0) {
			printf("\n");
		}

		c++;
	}

	return 0;
}
