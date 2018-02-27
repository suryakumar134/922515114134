#include<stdio.h>
void main()
{
int x,y,i;
printf("enter the two limits");
scanf("%d%d",&x,&y);
for(i=x;i<y;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
}
