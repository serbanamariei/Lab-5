#include<stdio.h>
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

	printf("Vectorul sortat:\n");
	ordonareBule(v,n);
	afis(v,n);

	return 0;
}
