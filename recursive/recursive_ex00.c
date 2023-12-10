#include <stdio.h>
int reAdd(int nbr)
{
    if (nbr == 1)
    {
        return (1);
    }
    else
    {
        return (nbr += reAdd(nbr-1));
    }
    
}
int main()
{
    int n;
    printf("Lütfen bir n sayisi giriniz :");
    scanf("%d",&n);
    printf("sonuc : %d",reAdd(n));
}