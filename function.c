
#include <stdio.h>
int fun(int x, int y);
int main()
{
    int a=15,b=20;
    fun(a,b);
    printf("%d%d",a,b);
}

int fun(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d%d",x,y);
}

