#include<stdio.h>
float avg(int,int,int);
void main()
{
    int n1,n2,n3;
    float res;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    res=avg(n1,n2,n3);
    printf("The average of three numbers is %f",res);
}
float avg(int a,int b,int c)
{
    float r1;
    r1=(float)(a+b+c)/3;
    return r1;
}
