#include <stdio.h>
int fac(int nbr)
{
    if(nbr == 1 || nbr == 0)
    {
        return (1);
    }
    else if (nbr < 0)
    {
        return(-1);
    }
    else
    {
        return(nbr * fac(nbr-1));
    }
}
int main()
{
    printf("%d",fac(4));
}