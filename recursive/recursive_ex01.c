#include <stdio.h>
int reMultiply(int nbr1,int nbr2)
{
    int sonuc;
    if(nbr2 == 1)
    {   
        sonuc = nbr1;
    }
    else
    {
        sonuc = (nbr1 + reMultiply(nbr1,nbr2-1));
    }
    return (sonuc);
}
int main()
{
    int nbr1,nbr2;
    printf("Enter number1 and number2 :");
    scanf("%d %d",&nbr1,&nbr2);
    printf("%d x %d = %d",nbr1,nbr2,reMultiply(nbr1,nbr2));
}