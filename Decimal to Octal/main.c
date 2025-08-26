// Standard
#include <stdio.h>
int main()
{
    int num,d,sum=0,i=1;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    while (num>0)
    {
        d=num%8;
        sum+=d*i;
        i*=10;
        num/=8;
    }
    printf ("The Octal: %d",sum);
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
        d=num%8;
        sum+=d*i;
        num/=8;
    }
    printf ("The octal: %d",sum);
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
        d=num%8;
        arr[i]=d;
        num=num/8;
    }
    printf ("The octal: ");
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
        d=num%8;
        sum=sum+(pow(10,i)*d);
        num/=8;
    }
    printf ("The octal: %d",sum);
    return 0;
}
// Function
#include <stdio.h>
int octal (int n)
{
    int d,sum=0,i=1;
    while (n>0)
    {
        d=n%8;
        sum+=d*i;
        i*=10;
        n/=8;
    }
    return sum;
}
int main()
{
    int num;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    printf ("The octal: %d",octal(num));
    return 0;
}
