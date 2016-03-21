#include "add.h"
#include <stdio.h>
int main() {
	int a = -1, b = 2;
	printf("%d + %d = %d\n", a, b, add(a, b));
	return 0;
}