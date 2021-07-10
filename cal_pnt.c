#include<stdio.h>

int main()
{
int y,x;
printf("Enter two numbers.\n");
scanf("%d",&x);
scanf("%d",&y);
int *p,*q;
p=&x;
q=&y;
int a,b,c,d;
a=(*p+*q);
b=(*p)-(*q);
c=(q)(*p);
d=(*p)/(*q);
printf("Addition=%d Subtraction=%d Multipication=%d Divide=%d",a,b,c,d);
return 0;
}
