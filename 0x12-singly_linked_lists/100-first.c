#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare -  main entry point
 * Description: prints a string before the main function
 * is executed
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
