#include <stdio.h>

void main(void) 
{
	int n,m,i;
    scanf("%d,%d",&n,&m);
    for(i=n;i<=m;i++)
    {
    if(i%2!=0)
    {
     printf("%d\n",i);
    }
    }

}
