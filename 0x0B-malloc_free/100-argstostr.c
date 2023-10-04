#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*argstostr-Concatenateallprogramargumentsintoasinglestring.
*@ac:Theargumentcount.
*@av:Anarrayofargumentstrings.
*
*Return:Apointertoanewlyallocatedstringcontainingthe
*concatenatedarguments
*ReturnsNULLifac==0or
*av==NULLorifmemoryallocationfails.
*/

char *argstostr(int ac, char **av)
{
	int o, p, q = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (o = 0; o < ac; o++)
	{
	for (p = 0; av[o][p]; p++)
	l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
	return (NULL);
	for (o = 0; o < ac; o++)
	{
	for (p = 0; av[o][n]; p++)
	{
	str[q] = av[o][p];
	q++;
	}
	if (str[q] == '\0')
	{
	str[q++] = '\n';
	}
	}
	return (str);
}
