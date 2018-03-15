#include<stdio.h>
void main()
{
    int i,a,n,d,T,sum=0;
    printf("enter the a,n,d values are");
    scanf("%d%d%d",&a,&n,&d);
    for(i=1;i<=n;i++)
    {
        T=a+(i-1)*d;
        sum=sum+T;
    }
    printf("%d",&sum);
}
