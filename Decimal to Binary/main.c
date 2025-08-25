// Standard
#include <stdio.h>
int main()
{
    int num,d,sum=0,i=1;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    while (num>0)
    {
        d=num%2;
        sum+=d*i;
        i*=10;
        num/=2;
    }
    printf ("The binary: %d",sum);
    return 0;
}
// for loop
#include <stdio.h>
int main()
{
    int num,d,sum=0,i;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    for (i=1; num>0; i*=10)
    {
        d=num%2;
        sum+=d*i;
        num/=2;
    }
    printf ("The binary: %d",sum);
    return 0;
}
// Using array
#include <stdio.h>
int main()
{
    int i,j,d,num;
    int arr[32];
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    for (i=0; num>0; i++)
    {
        d=num%2;
        arr[i]=d;
        num=num/2;
    }
    printf ("The binary: ");
    for (j=i-1;j>=0;j--)
    {
        printf ("%d",arr[j]);
    }
    return 0;
}
// Using power function
#include <stdio.h>
#include <math.h>
int main()
{
    int i,num,d,sum=0;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    for (i=0; num>0; i++)
    {
        d=num%2;
        sum=sum+(pow(10,i)*d);
        num/=2;
    }
    printf ("The binary: %d",sum);
    return 0;
}
