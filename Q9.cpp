#include<stdio.h>       //LCM of two numbers
int main()
{
int x,y,i;
printf("Enter two numbers : ");
scanf("%d%d",&x,&y);
for(i=1;i<=x*y;i++)
{
    if(i%x==0&&i%y==0)
        break;
}
printf("LCM is : %d",i);
return 0;
}
