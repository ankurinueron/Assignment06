#include<stdio.h>       //sum of cube of 'n' natural numbers
int main()
{
int x,i,s=1,m=0;
printf("Enter any number whose sum of cubes is needed : ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    s=i*i*i;
    m=m+s;

}
printf("Sum of cubes of the numbers is %d",m);
return 0;
}
