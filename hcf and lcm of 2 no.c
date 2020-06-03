#include <stdio.h>
int main ()
{
    int a,b,x,y,t,hcf,lcm;
    printf("Enter two integers\n");
    scanf ("%d%d",&x,&y);
    a=x;
    b=y;
    while (b!=0)
    {
        t=b;
        t=a%b;
        a=t;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf ("hcf of %d and %d=%d\n",x,y,hcf);
    printf ("lcm of %d and %d=%d\n",x,y,lcm);
}