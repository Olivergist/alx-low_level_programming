#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - Before the main print a sentence
 *
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
