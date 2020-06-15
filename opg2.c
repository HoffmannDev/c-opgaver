#include <stdio.h>
int main() 
{
	int tal1, tal2;
	
	printf("Indtast tal 1: ");
	scanf("%d", &tal1);

	printf("Indtast tal 2: ");
	scanf("%d", &tal2);

	if (tal1 < 1 || tal2 < 1)
	{
		printf("Man kan ikke dividere med 0 eller mindre :)\n");
	}
	else if (tal1 % tal2 == 0)
	{
		printf("%d kan divideres med %d uden en restvaerdi", tal1, tal2);
	}
	else
	{
		printf("%d kan ikke divideres med %d uden en restvaerdi", tal1, tal2);
	}
	return 0;
}