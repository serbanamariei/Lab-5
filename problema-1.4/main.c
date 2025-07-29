#include<stdio.h>
#include<stdbool.h>
#include"vectorInt.h"

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);

	int v[DIMMAX];
	citireVector(v,n);
	printf("Vectorul dvs:\n");
	afis(v,n);

	int diferiti[DIMMAX];
	int nrElem=distinct(v,diferiti,n);
	printf("Vectorul cu elemente distincte:\n");
	afis(diferiti,nrElem);

	printf("numarul pe care doriti sa-l cautati: ");
	int nr;
	scanf("%d",&nr);

	if(gasit(diferiti,nrElem,nr)) printf("Numarul cautat de dvs se regaseste in vector.\n");
	else printf("Numarul cautat de dvs NU se gaseste in vector.\n");

	return 0;
}
