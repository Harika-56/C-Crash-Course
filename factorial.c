#include <stdio.h>
int fact(int n);
int main() {
    int num,factorial;
    printf("enter a num to caluculate it's factorial:");
    scanf("%d",&num);
    factorial=fact(num);
    printf("factorial of the num(%d)=%d\n",num,factorial);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
return f;
    
}
