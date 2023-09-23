#include <stdio.h>

/**
 * intro_func - Runs before main function is executed.
 */
void __attribute__((constructor)) intro_func(void);

/**
 * intro_func - Prints a message before main.
 */
void intro_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
