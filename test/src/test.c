/*
 ============================================================================
 Name        : test.c
 Author      : wang
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int main()
{
	int i,max,min,n;
	scanf("%d",&n);
	max=n;min=n;
	for(i=1;i<10;i++)
	{
		scanf("%d",&n);
		if(max<n) max=n;
		if(min>n) min=n;
	}
	printf("最大数:%d,最小数:%d",max,min);
}
