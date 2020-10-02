#include<stdio.h>
//function of swap of two numbers without using third number
void swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a,b;
    printf("\nenter two number: ");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping the numbers:%d %d",a,b);
    swap(&a,&b);
    printf("\nafter swapping the number:%d %d",a,b);
    return 0;
}
