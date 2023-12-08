#include <stdio.h>
int str_len(char *arr)
{
    int i;

    i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *str_copy(char *dest, char *src)
{
    int lenght;
    int i;

    lenght = str_len(src);
    i = 0;
    while (i < lenght)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    int lenght;
    char src[100];
    char dest[100];
    int i;

    printf("Enter src array : ");
    scanf("%s",src);
    str_copy(dest,src);
    lenght = str_len(src);

    i = 0;
    while (i < lenght)
    {
        printf("%c", dest[i]);
        i++;
    }
    printf("\n");
}