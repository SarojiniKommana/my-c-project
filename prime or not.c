#include<stdio.h>
int main()
{
int a,i,f=0;
printf("enter a value");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{ if(a%i==0)
{f++;
break;}
}


if(f==0&&a>1)
{printf("prime");}
else
{printf("not prime");}

}


