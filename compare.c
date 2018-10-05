#include<stdio.h>
int compare(int a,int b);
void main()
{
    int a,b,large;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    
    large=compare(a,b);
    printf("largest=%d",large);
    
}

int compare(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
