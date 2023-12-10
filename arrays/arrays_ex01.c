#include <stdio.h>
int str_len(char *arr)
{
    int i = 0;
    char *ptr;

    ptr = arr;
    while (*ptr != '\0')
    {
        ptr++;
        i++;
    }
    return(i);
}
int main()
{
    printf("%d",str_len("yusuf eren nalbant"));
}