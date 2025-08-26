#include <stdio.h>
int main ()
{
    int p,t;
    float r,si;
    printf("enter principal amount");
    scanf("%d",&p);
    printf("enter time period");
    scanf("%d",&t);
    printf("enter the rate of interest");
    scanf("%d",&r);
    si=(p*r*t)/100;
    printf("simple interest=%f\n",si);
    return 0;

}
