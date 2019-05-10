/*Author: @ironsubhajit */
/*greatest common divisor using recursion method*/
#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b,c;
    printf("enter two no.:");
    scanf("%d%d",&a,&b);
    c=gcd(a,b);
    printf("G.C.D of %d and %d is: %d",a,b,c);
}
int gcd(int a, int b)
{
    if (a==0)
        return b;
    if (b==0)
        return a;
    if (a==b)
        return a;
    if (a>b)
        return gcd(a-b,b);
    if (b>a)
        return gcd(a,b-a);
}
