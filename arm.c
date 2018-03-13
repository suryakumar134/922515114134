#include<stdio.h>
void main()
{
int p,q,n1,temp=0,c,i;
printf("enter the number");
scanf("%d%d",&p,&q);
for(i=p;i<q;i++)
{
    c=p;
while(p>0)
{
n1=p%10;
temp=temp+(n1*n1*n1);
p=p/10;
}


if(temp==c)
{
printf(" armstrong number");
}
else
{
printf(" not an armstrong");
}
}
}
