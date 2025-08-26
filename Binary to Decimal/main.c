// Standard
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    int sum=0,c=0,i=0;
    while (num>0)
    {
        int d=num%10;
        if (d==1)
        {
            sum+=pow(2,i);
        }
        else if (d!=0)
        {
            c=1;
            break;
        }
        num/=10;
        i++;
    }
    if (c==1)
        printf("Entered number is not binary.\n");
    else
        printf("The decimal number is: %d\n",sum);
    return 0;
}
// for loop
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    int sum=0,c=0,f=0;
    int n=num;
    while (n>0)
    {
        n/=10;
        c++;
    }
    for (int i=0; i<c; i++)
    {
        if (num%10==1)
        {
            sum+=pow(2,i);
        }
        else if (num%10!=0)
        {
            f=1;
            break;
        }
        num/=10;
    }
    if (f==1)
        printf("Entered number is not binary.\n");
    else
        printf("The decimal number is: %d\n",sum);
    return 0;
}
// Function
#include <stdio.h>
#include <math.h>
int decimal (long long int n)
{
    int sum=0,c=0,i=0;
    while (n>0)
    {
        int d=n%10;
        if (d==1)
        {
            sum+=pow(2,i);
        }
        else if (d!=0)
        {
            return 0;
        }
        n/=10;
        i++;
    }
    return sum;
}
int main()
{
    long long int num;
    printf ("Enter the number: ");
    scanf ("%lld",&num);
    if (decimal(num)==0)
        printf("Entered number is not binary.\n");
    else
        printf("The decimal number is: %d\n",decimal(num));
    return 0;
}
