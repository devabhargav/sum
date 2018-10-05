#include<stdio.h>
int compare(int a,int b,int c);
void main()
{
    int a,b,c,large;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
    large=compare(a,b,c);
    printf("largest=%d",large);
    
}

int compare(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    if(b>a && b>c)
    return b;
    else
    return c;
}

