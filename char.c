#include<stdio.h>
int main()
{
   char ch;
   ch=getchar();
   if((ch>64)&&(ch<91))
   {
	   ch=ch+32;
	   printf("%c",ch);
   }
   else if((ch>96)&&(ch<123))
   {
	   ch=ch-32;
	   printf("%c",ch);
   }
   else
	   printf("wrong");
}
