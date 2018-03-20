
#include <stdio.h>
#include<string.h>

int main()
{
int T1,T2,T3,min1,min2,min3,hr1,hr2,hr3;
printf("enter the first time in hr and min");
scanf("%d%d",&hr1,&min1);
printf("enter the second time in hr and min");
scanf("%d%d",&hr2,&min2);
T1=(hr1*60)+min1;
T2=(hr2*60)+min2;
T3=T1-T2;
hr3=T3/60;
min3=T3%60;
printf("difference between two times are  %d:%d",abs(hr3),abs(min3));
    return 0;
}
