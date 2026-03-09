#include <stdio.h>

void increment_by_five(int *x) {
	*x += 5;
}

int main(int argc, char* argv[]) {
	
	char x = 'a';
	char *y = &x;

	int z = (int) x;

	printf("size of x: %ld and size of y: %ld\n", sizeof(x), sizeof(y));
	printf("address of y: %p and address of x: %p\n", (void *) y, &x);
	
	printf("Argc value: %d\n", argc);
	printf("Size of argv: %ld bytes\n", sizeof(*argv) * argc);

	increment_by_five(&z);
	printf("Value of Z incremented by 5 is %d\n", z);

	if (argc > 0) {
		for (int i = 0; i < argc; i++) {
			printf("Argv[%d] = ", i);
			puts(*argv);
			++argv;
		}
	}

	return 0;
}
