#include<stdio.h>       //sum of square of 'n' natural numbers
int main()
{
int x,i,s=1,m=0;
printf("Enter any number whose sum of square is needed : ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    s=i*i;
    m=m+s;

}
printf("Sum of square of the numbers is %d",m);
return 0;
}
