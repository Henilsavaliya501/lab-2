#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter any number : ");
    scanf("%d",&n);
    r=n%7;
    if (r==0)
        printf("%d is divisible by 7",n);
    else
        printf("%d is not divisible by 7",n);
}
