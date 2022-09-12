#include <stdio.h>
/**
 * main - entry point
 *
 * description: different computer sizes
 *
 * Return: 0
 */

int main(void)

{
printf("Size of a char: %d byte(s)\n", Sizeof(char));
printf("Size of an int: %d byte(s)\n", Sizeof(int));
printf("Size of a long int: %d byte(s)\n", Sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", Sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
