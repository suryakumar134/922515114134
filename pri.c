#include<stdio.h>
void main()
{
int p,q,flag,i;
printf("enter the 2 limits");
scanf("%d%d",&p,&q);
while(p<q)
{
flag=0;
for(i=2;i<p/2;i++)
{
if(p%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",p);
++p;
}
}
}
