#include<stdio.h>/*Checking inputed year is leapYear or not*/
int main()
{
    int y;
    printf("\nEnter a Year: ");
    scanf("%d",&y);
    if (y%400==0||y%4==0&&y%100!=0)
        printf("\n%d is leap year",y);
    else
        printf("\n%d is not a leap year",y);
}
