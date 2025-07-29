#include<stdio.h>
#include"vectorInt.h"

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);

	int tempMIN[DIMMAX],tempMAX[DIMMAX];
	printf("\nCitim valorile minime:\n");
	citireVector(tempMIN,n);
	printf("\nCitim valorile maxime:\n");
	citireVector(tempMAX,n);
	int tempMEDIE[DIMMAX];
	printf("\nVectorul temperaturilor medii:\n");
	for(int i=0;i<n;++i)
	{
		tempMEDIE[i]=(tempMIN[i]+tempMAX[i])/2;
	}
	afis(tempMEDIE,n);

	printf("\nTemperatura minima: %d\n",mini(tempMIN,n));
	printf("\nTemperatura maxima: %d\n", maxi(tempMAX,n));
	printf("\nTemperatura medie: %d\n", medieA(tempMEDIE,n));
	printf("\nMedie geometrica temperaturi maxime: %d\n",mediaG(tempMAX,n));

	return 0;
}
