#include <stdlib.h>
#include <stdio.h>

/**
* main - print args
* @ac: num of args
* @av: the args
* Return: (0)
*/


int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("av[%d] --> %s\n", i, av[i]);
	}

	return (0);
}

