#include<stdio.h>
int main ()

{

    int y, i=4;

    printf("Enter any year: ");
    scanf("%d", &y);

    printf("\n");

    if(y%i==0)
        {
            printf(">> %d is a leap year", y);
            printf("\n");
        }
    else
        {
            printf(">> %d is not a leap year", y);
            printf("\n");
        }



}
