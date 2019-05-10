#include<stdio.h>
int main()/*list of leap year between 2000 to 2022*/
{
    int i;
    printf("list of leap year between 2000 to 2022 is :\t");
    for (i=2000;i<=2022;i++)
    {
        if (i%400==0||i%4==0&&i%100!=0)
            printf("%d\t",i);
    }
}
