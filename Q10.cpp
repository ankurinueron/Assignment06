#include<stdio.h>       //reverse a number using loop
int main()
{
int x,rem,rev=0;
printf("Enter a number : ");
scanf("%d",&x);
while(x!=0)
{
    rem=x%10;
    x=x/10;
    rev=rev*10+rem;
}
printf("The reverse number is : %d",rev);
return 0;
}
