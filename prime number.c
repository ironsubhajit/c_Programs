#include<stdio.h>/*Check inputed no. is Prime or Not.*/
int main()
{
    int n, i;
    i=2;
    printf("\nEnter Any Number: ");
    scanf("%d",&n);
    while (i<n)
    {
        if (n%i == 0)
        {
            printf("\n%d is not a prime number.",n);
            break;
        }
        i++;
    }
    if (i==n)
        printf("\n%d is prime number.",n);
}
