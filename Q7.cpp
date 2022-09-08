#include<stdio.h>       //No. of digit of any number
int main()
{
int x,z;
printf("Enter the number : ");
scanf("%d",&x);
while(x!=0)
{
    x=x/10;
    z++;

}
printf("The no of digits are : %d ",z);
}
