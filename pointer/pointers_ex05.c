#include <stdio.h>
int main()
{
    int arr[100];
    int lenght;
    int *p1;
    int aranan;
    p1 = arr;

    printf("Dizinin genişliğini giriniz :");
    scanf("%d", &lenght);
    printf("Dizinin elemanlarını giriniz :\n");

    for (int i = 0; i < lenght; i++)
    {
        printf("%d. eleman :",(i+1));
        scanf("%d",p1);
        p1++;
    }

    p1 = arr;
    printf("Aradığınız eleman :");
    scanf("%d", &aranan);
    for (int i = 0; i <= 10; i++)
    {
        if(*p1 == aranan)
        {
            printf("%d dizide yer alıyor ve indexi %d\n",aranan,i);
            break;
        }
        else if (i == 10)
        {
            printf("%d dizide yer almıyor\n",aranan);
        }
        p1++;
    }
}