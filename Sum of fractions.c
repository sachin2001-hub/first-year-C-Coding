#include<stdio.h>
int main ()
{
    int a,b,c,d,x,y,i,gcd;
    printf ("Enter the 1st numerator number:\n");
    scanf ("%d",&a);
    printf ("Enter the 1st denominator number:\n");
    scanf ("%d",&b);
    printf ("Enter the 2nd numerator number:\n");
    scanf ("%d",&c);
    printf ("Enter the 2nd denominator number:\n");
    scanf ("%d",&d);
    x=(a*d)+(b*c);
    y=b*d;
    for (i=1;i<=x&&i<=y;i++)
    {
        if (x%i==0&&y%i==0)
        gcd=i;
    }
    printf("\n The added fraction is %d/%d",x/gcd,y/gcd);
    printf ("\n");
    return 0;
}