#include<stdio.h>
int main ()
{
    static int array [10][10];
    int i,j,m,n,a=0,sum=0;
    printf ("Enter the order of the matrix\n");
    scanf ("%d%d",&m,&n);
    if (m==n)
    {
        printf ("Enter the coefficients of the matrix\n");
        for (i=0;i <m;i++)
        {
            for (j=0;j <n;j++)
            {
                scanf ("%d",&array [i]);
            }
        }
        printf ("The given matrix is\n");
        for (i=0;i <m;i++)
        {
            for (j=0;j <n;j++)
            {
                printf ("%d",array [i][j]);
            }
            printf ("\n");
        }
        for (i=0;i <m;i++)
        {
            sum=sum+array [i][j];
            a=a+array [i][m-i-1];
        }
        printf ("\nThe sum of the principal diagonal elements is =%d\n",sum);
        printf ("The sum of the secondary diagonal elements is =%d\n",a);
    }
    else
    printf ("The given order is not square matrix\n");
}
