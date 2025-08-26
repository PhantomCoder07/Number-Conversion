// Simple 
#include <stdio.h>
int main()
{
    int num;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    printf ("The hexadecimal: %X\n",num);
    return 0;
}
// Standard 
#include <stdio.h>
int main()
{
    int num,d,i=1;
    char sum[1000];
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    while (num>0)
    {
        d=num%16;
        if (d<10)
            d+=48;
        else
            d+=55;
        sum[i++]=d;
        num/=16;
    }
    printf ("The hexadecimal: ");
    for (int j=i-1; j>0; j--)
    {
        printf("%c",sum[j]);
    }
    return 0;
}
// Function
#include <stdio.h>
void hexa (int n)
{
    int d,j,i=1;
    char sum[1000];
    while (n>0)
    {
        d=n%16;
        if (d<10)
            d+=48;
        else
            d+=55;
        sum[i++]=d;
        n/=16;
    }
    printf ("The hexadecimal: ");
    for (j=i-1; j>0; j--)
    {
        printf("%c",sum[j]);
    }
}
int main()
{
    int num;
    printf ("Enter the Decimal: ");
    scanf ("%d",&num);
    hexa(num);
    return 0;
}
