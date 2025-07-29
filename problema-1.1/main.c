#include<stdio.h>
#include"vectorInt.h"

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);

	int bacanieDeal[20], bacanieVale[20];
	printf("Citim stocul bacaniei Padurea cu alune din deal:\n");
	citireVector(bacanieDeal,n);
	printf("Citim stocul bacaniei Padurea cu alune din vale:\n");
	citireVector(bacanieVale,n);

	printf("\nStocul celor 2 bacanii:\n");
	printf("\nBacania Padurea cu alune din deal:\n");
	afis(bacanieDeal,n);
	printf("\nBacania Padurea cu alune din vale:\n");
	afis(bacanieVale,n);
	printf("\nProdusul scalar dintre cele 2 bacanii: %d\n",pscalar(bacanieDeal,bacanieVale,n));

	return 0;
}
