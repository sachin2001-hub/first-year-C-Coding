#include<stdio.h>
int main ()
{
    int a [50],b [50],n1,n2,i,c=0;
    printf ("Enter the size of array1 and 2 :\n");
    scanf ("%d",&n1,&n2);
    printf ("Enter elements of array 1:\n");
    for (i=0;i <n1;i++)
        scanf ("%d",&a [i]);
    printf ("Enter elements of array 2:\n");
    for (i=0;i <n2;i++)
        scanf ("%d",&b [i]);
    if (n1!=n2)
        printf ("The arrays are not equal.");
    else
    {
        for (i=0;i <n1;i++)
            if (a [i]!=b [i])
                c++;
        if (c==0)
            printf ("The arrays are equal.");
        else
            printf ("The arrays are not equal.");
    }
    return 0;
}