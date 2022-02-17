#include<stdio.h>
void fun(int *,int *);()
{
	int x=5,y=7;
	fun(&x,&y);
	printf("%d %d",x,y);
}
void fun(int *x,int *y)
{
	*x=9;
	*y=3;
	printf("%d %d",*x,*y);
}	

