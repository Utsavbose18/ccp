#include<stdio.h>

int main(){
int a,b,temp;
int *p,*q;
p=&a;
q=&b;
printf("Enter numbers\n");
scanf("%d %d",p,q);
temp=*p;
*p=*q;
*q=temp;

printf("After swaping=%d %d",a,b);
return 0;

}
