#include<stdio.h>
int main ()
{
    int a [50],i,n,large,small;
    printf ("\n Enter the number of elements:\n");
    scanf ("%d",&n);
    printf ("\n Input of the array element:\n");
    for (i=0;i <n;i++)
    scanf ("%d",&a [i]);
    large=small=a [0];
    for (i=0;i <n;i++)
    {
        if (a [i]>large)
        large=a [i];
        if (a [i]<small)
        small=a [i];
    }
    printf ("\n The smallest element is %d\n",small);
    printf ("\n The largest element is %d\n",large);
}
