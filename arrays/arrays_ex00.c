#include <stdio.h>
int kelime(char *arr)
{
    int i = 0;
    char *ptr;

    ptr = arr;
    while (*(ptr) != '\0')
    {
        while (*(ptr) != ' ')
        {
            ptr++;
        }
        i++;
        ptr++;
    }
    return(i);
    
}
int main()
{
    printf("%d",kelime("yusuf eren nalbant"));
}