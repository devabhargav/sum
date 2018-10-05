#include<stdio.h>
int main()
{
int a,b,sum=0;
printf("enter number a\n");
scanf("%d",&a);
printf("enter number b\n");
scanf("%d",&b);
sum=add(a,b);
printf("sum is %d",sum);
}
int add(int a,int b,int sum)
{
sum=a+b;
return sum;
}
