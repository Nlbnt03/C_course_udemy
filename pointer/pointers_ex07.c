#include <stdio.h>
int fak(int *nbr)
{
    int i = 1;
    int result = 1;
    if (*nbr == 0 || *nbr == 1)
    {
        return(1);
    }
    else if (*nbr < 0)
    {
       return(-1); 
    }
    else
    {
        while (i <= *nbr)
        {
            result *= i;
            i++;
        }
    }
    return (result);
}
int main()
{
    int number;
    int *ptr;
    ptr = &number;

    printf("Enter a number :");
    scanf("%d", ptr);

    printf("result : %d\n", fak(ptr));
}