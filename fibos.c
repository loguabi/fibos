#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=0,next,c;
printf("Enter the number of terms\n");
scanf("%d",&a);
printf("first %d terms of fibonacci series are :\n",a);
for(c=0;c<n;c++)
{
if(c<=1)
next=c;
else
next=a+b;
a=b;
b=next;
}
printf("%d\n",next);
}
