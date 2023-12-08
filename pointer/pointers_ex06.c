#include <stdio.h>
int min(int *arr)
{
    int result;

    result = *arr;
    while (*arr != '\0')
    {
        if (*arr < result)
        {
            result = *arr;
        }
        arr ++;
    }
    return (result);
}
int max(int *arr)
{
    int result;

    result = *arr;
    while (*arr != '\0')
    {
        if (*arr > result)
        {
            result = *arr;
        }
        arr++;
    }
    return (result);
}
int main()
{
    int lenght;
    int arr[100];
    int *p1;
    p1 = arr;

    printf("Dizinin genişliğini giriniz :");
    scanf("%d",&lenght);

    printf("Dizinin elemanlarını giriniz :\n");
    for (int i = 0; i < lenght; i++)
    {
        printf("%d. eleman :",(i+1));
        scanf("%d",p1);
        p1++;
    }
    
    printf("max değer : %d\n", max(arr));
    printf("min değer : %d\n", min(arr));
}