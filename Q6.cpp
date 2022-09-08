#include<stdio.h>       //sum of factorial of 'n' natural numbers
int main()
{
int x,i,s=1;
printf("Enter any number whose factorial is needed : ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    s=s*i;

}
printf("Factorials is %d",s);
return 0;
}
