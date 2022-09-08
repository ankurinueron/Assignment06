#include<stdio.h>       //Number is prime or not
int main()
{
int x,z,flag=0;
printf("Enter the number : ");
scanf("%d",&x);
for(z=2;z<x/2;z++)
{
if(x%z==0)
{
flag=1;
break;
}
}
if(flag==1)
{
    printf("Not a prime number");
}
else
    printf("It is a prime number");
return 0;
}
