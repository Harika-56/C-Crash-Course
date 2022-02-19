#include<stdio.h>
void fibonaccisesries(int n)

int main()
{
        int term;
        printf("enter the term:");
        scanf("%d",&term);
        printf("the fibonacci sries is:\n");
        fibonacciseries(term);
}
void fibonacciseries(int n)
{
        int a=0,b=1,c,i;
        for(i=0;i<n;i++)
        {
                c=a+b;
                a=b;
                b=c;
        }
}

~
~
~

