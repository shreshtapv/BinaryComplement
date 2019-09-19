/*
 * main.c
 *
 *  Created on: Sep 16, 2019
 *      Author: my pc
 */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int* complement(int bin[], int n);

void main()
{
	double decomp=0.0;
	int bin[10],binrev[10];
	int n,i,j,num;
	int* comp;
	scanf("%d",&num);
	printf("Given number %d\n",num);
	for(i=0;num>0;i++)
	{
		binrev[i]=num%2;
		num=num/2;
	}
	printf("\nBinary number is: ");
	n=i;
	for(i=i-1,j=0;i>=0;i--,j++)
	{
		bin[j]=binrev[i];
		printf("%d",bin[j]);
	}
	printf("\n");
	printf("\nBinary complement number is: ");

	comp=complement(bin,n);
	for(i=0;i<n;i++)
		printf("%d",comp[i]);
	for(i=n-1,j=0;i>=0;i--,j++)
	{

		decomp=decomp+(comp[i]*(pow((double)(2),(double)(j))));
		printf("\n%f",decomp);
	}
	printf("\nThe decimal complement is : %f",decomp);
}

int* complement(int bin[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(bin[i]==0)
			bin[i]=1;
		else
			bin[i]=0;
	}
	int arr=bin;
	return arr;
}
