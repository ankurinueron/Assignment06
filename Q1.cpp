#include<stdio.h>       //sum of 'n' natural numbers
int main()
{
int x,i,s=0;
printf("Enter any number whose sum is needed : ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    s=s+i;

}
printf("Sum of the numbers is %d",s);
return 0;
}
