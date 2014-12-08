#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("Program name (prog_name): %s\n", argv[0]);
	printf("Number of arguments (num_args): %d\n", argc-1);
	printf("First argument (first_arg): %s\n", argv[1]);
	exit(0);
}
