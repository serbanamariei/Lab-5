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

int sistEc(int coef[6], int sol[2])
{
	int  a1=coef[0], b1=coef[1], c1=coef[2];
	int a2=coef[3], b2=coef[4], c2=coef[5];
	int rez;

	int d=a1*b2-a2*b1;
	int dx=c1*b2-c2*b1;
	int dy=a1*c2-a2*c1;

	if(d)
	{
		sol[0]=dx/d;
		sol[1]=dy/d;
		rez=1;
	}
	else
	{
		if(dx==0 && dy==0)
		{
			rez=2;
		}
		else
		{
			rez=3;
		}
	}
}

void init(int a[], int n)
{
	for(int i=0;i<n;++i)
	{
		a[i]=1;
	}
}

int pscalar(int a[], int b[], int n)
{
	int p=0;
	for(int i=0;i<n;++i) p+=a[i]*b[i];
	return p;
}
