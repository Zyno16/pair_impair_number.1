#include <stdio.h>
#include <stdlib.h>

int main()
{int num,r;
int x;

   printf("Enter number");
   scanf("%d",&num);
r=num%2;
printf("%d\n",r);
if(r==1)printf("the number is impair");
else if (r==0)printf("the number is pair");
else printf("invalid number");
    return 0;
}
