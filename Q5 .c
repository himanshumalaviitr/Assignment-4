//Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i=10;
    while(i)
    {
        printf("%d ",2*i-1);
        i--;
    }
    printf("\n");
    return 0;
}
