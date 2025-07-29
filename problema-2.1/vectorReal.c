#include<stdio.h>
#include<math.h>
#include"vectorReal.h"

void citireVector(int a[], int n)
{
	printf("Citim vectorul:\n");
	for(int i=0;i<n;++i)
	{
		printf("elem[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void afis(int a[], int n)
{
	printf("Vectorul dvs:\n");
	printf("[");
	for(int i=0;i<n;++i)
	{
		printf("%d ",a[i]);	
	}
	printf("]");
}

int medie(int a[], int n)
{
	int ma=0;
	for(int i=0;i<n;++i)
	{
		ma+=a[i];
	}
	return ma/n;
}

double abatere(int a[], int n)
{
	int suma=0;
	int ma=medie(a,n);
	for(int i=0;i<n;++i)
		suma+=(a[i]-ma)*(a[i]-ma);
	return sqrt(suma/(n*(n-1)));
}

int nrElemNU(int a[], int n)
{
	int nr=0;
	int ma=medie(a,n);
	for(int i=0;i<n;++i)
		if(a[i]<=ma) nr++;
	return nr;
}

int yvector(int x[], int n, int y[])
{
	int nr=0;
	for(int i=0;i<n;++i)
		if(x[i]>medie(x,n))
		{
			y[nr]=x[i];
			nr++;
		}
	
	return nr;
}
