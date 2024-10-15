#include<stdio.h>
int main()
{

int a,rev,rem,num;
printf("enter a value");
scanf("%d",&a);
num=a;

for(rev=0;a>0;a=a/10)
 { rem=a%10;
 rev=rev*10+rem;}
 
 if(num==rev)
 {printf("palindrome");}
 else
 {printf("not palindrome");}
 return 0;
 }
