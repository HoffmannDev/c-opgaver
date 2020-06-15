#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int tal = atoi(argv[1]);

	if (argc != 2) 
	{
		printf("Start programmet med 1 tal som parameter.");
	}
	else if (tal < 50 && tal > 0)
	{
		printf("Tallet er mindre end 50");
	}
	else if (tal > 50 && tal < 101)
	{
		printf("Tallet er stoerre end 50");
	}
	else if (tal == 50)
	{
		printf("Tallet er praecis 50.");
	}
	else 
	{
		printf("Det valgte tal skal vaere mellem 1 og 100");
	}
	return 0;
}