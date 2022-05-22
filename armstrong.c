#include<stdio.h>
int main()
{
int a, temp, sum=0;
int d;
printf("Enter the number:\n");
scanf("%d",&a);

temp=a;
while(temp!=0)
{
d=temp%10;
sum+=d*d*d;
temp=temp/10;
}
if(sum==a)
{
printf("Armstrong Number\n");
}
else
{
printf("Not Armstrong Number\n");
}
return 0;
}

