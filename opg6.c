#include <stdio.h>
#include <ctype.h>
char fornavn[20], efternavn[50], koen[2], sprog[4], svar[30];
int alder;

int A, B, C;

int udregner()
{
	A = (*koen == 'm');
	B = (alder > 20 && alder < 35);
	C = (*sprog == 'j');
	return A, B, C;
}

int main() 
{
	printf("Velkommen til job ansoegnings platformen.\nIndtast foelgende informationer, og applikationen giver svar paa om du kan faa stillingen. \n");
	
	printf("Fornavn:");
	scanf("%s", fornavn);

	printf("Efternavn:");
	scanf("%s", efternavn);

	printf("Koen (m/k): ");
	scanf("%s", koen);
	
	for(int i = 0; koen[i]; i++)
	{
  	koen[i] = tolower(koen[i]);
	}

	printf("Alder:");
	scanf("%d", &alder);

	printf("Snakker du svensk og/eller norsk? (ja/nej):");
	scanf("%s", sprog);
	
	for(int i = 0;sprog[i]; i++)
	{
  	sprog[i] = tolower(sprog[i]);
	}

	udregner();
	if (A, B, C)
	{
		printf("Tillyke %s %s, du fik jobbet.\n", fornavn, efternavn );
	}
	else
	{
		printf("Desvaerre %s %s, du opfylder ikke kravene til jobbet.\n", fornavn, efternavn);
	}
	return 0;
}