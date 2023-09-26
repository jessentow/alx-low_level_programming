#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to char which is the target pointer.
 * @to: Pointer to the character  whose address will be stored.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
