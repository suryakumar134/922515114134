
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,originalnum,result=0,rem;
    clrscr();
    printf("enter the number \n");
    scanf("%d",&n);
    originalnum=n;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        result=result+rem*rem*rem ;
        originalnum=originalnum/10;
    }
    if(result==n)
    {
        printf("the number is amstrong");
    }
    else
    {
        printf("the number is not armstrong");
    }
    getch();
}
