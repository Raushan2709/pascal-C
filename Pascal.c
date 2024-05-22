#include<stdio.h>
int factorial(int x)    // function yaha declare hua hai
{
    int fact=1;
    for(int i=2;i<=x;i++)
        {
            fact=fact*i;
        }
    return fact;
}
int combination(int n,int r){
int ncr =factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        for(int p=1;p<=n-i; p++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d  ",icj);
    }
    printf("\n");
    }
    return 0;
}