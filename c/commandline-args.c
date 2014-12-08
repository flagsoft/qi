#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("Number of arguments: %d\n", argc);
	printf("Program name %s\n", argv[0]);
	printf("argv[1]: %s", argv[1]);
	exit(0);
}
