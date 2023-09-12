#include <stdio.h>

#define PRINT_FILE_NAME printf("%s\n", __FILE__)

int main() {
	PRINT_FILE_NAME;
	return 0;
}

