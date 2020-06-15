#include <stdio.h>
int main() 
{
	int tal1, tal2, svar;
	
	printf("Indtast tal 1: ");
	scanf("%d", &tal1);

	printf("Indtast tal 2: ");
	scanf("%d", &tal2);

	if (tal1 < 1 || tal2 < 1)
	{
		printf("Man kan ikke dividere med 0 eller mindre :)\n");
	}
	else if (tal1 % tal2 != 0 && tal2 % tal1 != 0)
	{
		printf("Disse tal gaar ikke op i hinanden.\n");
	}
	else if (tal1 > tal2)
	{
		svar = tal1/tal2;
		printf("%d divideret med %d er: %d ", tal1, tal2, svar);
	}
	else
	{
		svar = tal2/tal1;
		printf("%d divideret med %d er: %d ", tal2, tal1, svar);
	}
	return 0;
}