#include<stdio.h>
int main()/*swap of two numbers without using third number*/
{
    int a,b,c;
    printf("\nenter two number: ");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping the numbers:%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping the number:%d %d",a,b);
    return 0;
}
