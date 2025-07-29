#include<stdio.h>
#include"vectorReal.h"

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);

	int a[DIMMAX];
	citireVector(a,n);
	afis(a,n);
	double ab=abatere(a,n);
	printf("\nabatere medie patratica: %.3lf\n",ab);
	printf("Numere care nu depasesc valoarea medie: %d\n",nrElemNU(a,n));
	int y[DIMMAX];
	int nrElemDA=yvector(a,n,y);
	afis(y,nrElemDA);

	return 0;
}
