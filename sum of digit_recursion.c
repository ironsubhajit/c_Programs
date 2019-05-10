/*Author: @ironsubhajit */
/*Calculate Sum of a digit Using Recursion*/
#include<stdio.h>
int sum(int );
int main()
{
    int n;
    printf("\nEnter Any number: ");
    scanf("%d",&n);
    int r= sum(n);
    printf("\nSum of digits in %d is %d\n",n,r);
}
int sum(int num)
{
    if (num==0)
        return 0;
    else
        return (num%10+sum(num/10));
}
