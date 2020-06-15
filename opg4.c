#include <stdio.h>

int tal;

int udregner()
{
	char svar[24];
	if (tal == 50)
	{
		printf("Tallet er praecis 50.");
	}
	else if (tal > 50)
	{
		printf("Tallet er stoerre end 50.");
	}
	else 
	{
		printf("Tallet er mindre end 50.");
	}

	return 0;
}

int main() 
{
	printf("Indtast et tal mellem 1 og 100: ");
	scanf("%d", &tal);

	if (tal >= 1 && tal <= 100)
	{
		udregner();
	}
	else
	{
		printf("Tallet skal vaere mellem 1 og 100:)");
	}
	return 0;
}