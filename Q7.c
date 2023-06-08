//Write a program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i=10;
    while(i)
    {
        printf("%d ",2*i);
        i--;
    }
    printf("\n");
    return 0;
}
