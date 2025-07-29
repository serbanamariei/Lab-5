#include<stdio.h>
#include"vectorInt.h"

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);

	int livadaRosu[DIMMAX],livadaVerde[DIMMAX];
	printf("Citim valorile pentru fiecare livada:\n");
	printf("\nLivada Imparatului Rosu:\n");
	citireVector(livadaRosu,n);
	printf("\nLivada Imparatului Verde:\n");
	citireVector(livadaVerde,n);

	printf("Stocul celor 2 livezi:\n");
	printf("Livada Imparatului Rosu:\n");
	afis(livadaRosu,n);
	printf("Livada Imparatului Verde:\n");
	afis(livadaVerde,n);

	printf("Numarul merelor trimise Imparatului Rosu este %d\n",suma(livadaVerde,n));

	return 0;
}
