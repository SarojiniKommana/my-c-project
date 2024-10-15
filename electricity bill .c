#include<stdio.h>
int main()
{

int n;
float bill;
printf("enter no of electricity units n");
scanf("%d",&n);

if(n<=50)
{bill=n*0.5;}
else if(n<=150)
{bill=50*0.5+(n-50)*0.75;}
else if (n<=250)
{bill=50*0.5+100*0.75+(n-150)*1.2;}
else
{bill=50*0.5+100*0.75+100*1.2+(n-250)*1.5;}
printf("the total electricity bill is %f",bill);
}



