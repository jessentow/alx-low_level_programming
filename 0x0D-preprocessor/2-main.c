#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:This program prints the name of
 * the file it was compiled from.
 * It uses the __FILE__ macro to get the filename.
 *
 * Return:This will Always return 0 as successful
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
