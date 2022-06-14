#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * @argc: num count
 * @argv: name
 * Return: 0.
 */
int main(int argc, char *argv[])
{
        int counter;
        
	for (counter = 0; counter <argc; counter++)
                printf("argv[%2d]: %s\n",counter,argv[counter]);
        return (0);
}
~      
