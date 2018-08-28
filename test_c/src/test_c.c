/*
 ============================================================================
 Name        : test_c.c
 Author      : wang
 Version     : 1.2S
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf ("%d,%d",&a,&b);
	c=max(a,b);
	printf ("max=%d",c);
}

int max(int x,int y)
{
	int z;
	if (x>y)
		z=x;
	else z=y;
	return (z);
}
