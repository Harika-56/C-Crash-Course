#include<stdio.h>
void swap(int,int);
int main()
{
	int a=7;
	int b=5;
	printf("before swapping %d %d\n",a,b);
	swap(a,b);
	printf("after swapping %d %d/n",a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping %d %d",a,b);
}	
