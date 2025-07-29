#include<stdio.h>
#include"vectorInt.h"

void citireVector(int a[], int n)
{
	for(int i=0;i<n;++i)
	{
		printf("livada[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void afis(int a[], int n)
{
	printf("[ ");
	for(int i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}
	printf("]");
}

int pscalar(int a[], int b[], int n)
{
	int p=0;
	for(int i=0;i<n;++i)
		p+=a[i]*b[i];
	return p;
}

int medieA(int a[], int n)
{
	int ma=0;
	for(int i=0;i<n;++i) ma+=a[i];
	return ma/n;
}

int suma(int a[], int n)
{
	int s=0;
	for(int i=0;i<n;++i)
	{
		int ma=medieA(a,n);
		if(a[i]>ma) s+=a[i]-ma;
	}

	return s;
}
