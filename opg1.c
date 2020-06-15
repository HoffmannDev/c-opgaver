#include <stdio.h>

/* Kom til at lave opg 1 med arguments i stedet for command line input. */

int main(int argc, char *argv[]) {

	if (argc != 3) 
	{
		printf("Start programmet med 2 tal som parametre.");
	}
	else if (*argv[1] == *argv[2])
	{
		printf("Tallene er ens.");
	} 
	else
	{
		printf("Tallene er ikke ens.");
	}

	return 0;
}