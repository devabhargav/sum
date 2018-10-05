#include<stdio.h>
float sum(float a,float b);
void main()
{
    float a,b,add;
    printf("enter the numbers:");
    scanf("%f%f",&a,&b);
    add=sum(a,b);
    printf("total=%f",add);
    
}

float sum(float a,float b)
{
    float result;
    result=a+b;
    return result;
}
