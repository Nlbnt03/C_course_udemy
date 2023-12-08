#include <stdio.h>
int main()
{
    int lenght;
    printf("Enter a lenght :"); 
    scanf("%d",&lenght);

    int arr[100];
    int *p1;
    p1 = arr;
    int i = 0;

    printf("Enter items :\n");
    while (i < lenght)
    {
        scanf("%d", p1);
        p1++;
        i++;
    }

    i = 0;
    p1 = arr;
    printf("items :\n");
    while (i < lenght)
    {
        printf("%d\n", *p1);
        p1++;
        i++;
    }
}